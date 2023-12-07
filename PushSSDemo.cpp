#include "PushSSDemo.h"


PushSSDemo::PushSSDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_tcpServer = new QTcpServer(this);
	m_clientConnection = nullptr;
	m_process = Q_NULLPTR;
	if ((!m_tcpServer->listen(QHostAddress::LocalHost, 9998)))
	{
		ui.m_info->append(QStringLiteral("通信服务创建失败"));
		close();
	}
	else
	{
		ui.m_info->append(QStringLiteral("通信服务创建成功"));
	}

	connect(m_tcpServer, &QTcpServer::newConnection,
		this, &PushSSDemo::sendMessage);
	connect(m_clientConnection, &QAbstractSocket::disconnected, this, [=]() {
		m_clientConnection->deleteLater();
		});

	connect(ui.m_ImgRecStartBtn, &QPushButton::clicked, this, &PushSSDemo::startImgRecMod);

	connect(ui.m_em1SerOpenBtn, &QPushButton::clicked, this, &PushSSDemo::openEmSer1Port);

	connect(ui.m_em2SerOpenBtn, &QPushButton::clicked, this, &PushSSDemo::openEmSer2Port);

	connect(ui.m_em1SerCloseBtn, &QPushButton::clicked, this, &PushSSDemo::closeEmSer1Port);

	connect(ui.m_em2SerCloseBtn, &QPushButton::clicked, this, &PushSSDemo::closeEmSer2Port);

	loadSerialPort();

}
PushSSDemo::~PushSSDemo()
{
	if (m_clientConnection != Q_NULLPTR)
	{
		m_clientConnection->close();
		delete m_clientConnection;
		m_clientConnection = Q_NULLPTR;
	}
	if (m_process != Q_NULLPTR)
	{
		m_process->close();
		delete m_process;
		m_process = Q_NULLPTR;
	}
}
void PushSSDemo::readMessage()
{	
	/*有问题待测试*/
		//QDataStream in(m_clientConnection);

		//in.setVersion(QDataStream::Qt_5_6);

		//in >> m_blockSize;
		//in >> m_RecMessage;
	/**/
	QTcpSocket* obj = (QTcpSocket*)sender();
	m_RecMessage = obj->readAll();
	ui.m_info->append(m_RecMessage);
}
void PushSSDemo::sendMessage()
{
	m_clientConnection = m_tcpServer->nextPendingConnection();
    connect(m_clientConnection, &QTcpSocket::readyRead, this, &PushSSDemo::readMessage);
	connect(m_clientConnection, SIGNAL(error(QAbstractSocket::SocketError)),
		this, SLOT(displayError(QAbstractSocket::SocketError)));

	QByteArray block;
	QDataStream out(&block, QIODevice::WriteOnly);

	// 设置数据流的版本，客户端和服务器端使用的版本要相同
	out.setVersion(QDataStream::Qt_5_6);
	out << (quint16)0;
	out << tr("connect sucessful !");
	out.device()->seek(0);
	out << (quint16)(block.size() - sizeof(quint16));

	m_clientConnection->write(block);
	m_clientConnection->flush();

	ui.m_info->append(QStringLiteral("图像识别模块连接成功"));

}
void PushSSDemo::displayError(QAbstractSocket::SocketError)
{
	ui.m_info->append(QStringLiteral("图像识别模块未连接，等待连接"));
}
void PushSSDemo::startImgRecMod()
{
	//if (!m_tcpServer)
	//{
	//	ui.m_info->append(QStringLiteral("通信服务未创建，不能启动"));
	//	return;
	//}
	m_process = new QProcess(this);
	m_process->setProcessChannelMode(QProcess::MergedChannels);
	connect(m_process,SIGNAL(readyReadStandardOutput()),this,SLOT(read_data()));
	connect(m_process, SIGNAL(readyRead()), this, SLOT(read_data()));
	m_process->start("cmd.exe");
	QString cmd = QString("ping 127.0.0.1\r\n");
	QByteArray qbarr = cmd.toLatin1();
	char* ch = qbarr.data();
	qint64 len = cmd.length();
	m_process->write(ch, len);
}
void PushSSDemo::read_data()
{
	QByteArray bytes = m_process->readAll();
	QString msg = QString::fromLocal8Bit(bytes);
	ui.m_info->append(msg);
	ui.m_info->update();
}
void PushSSDemo::loadSerialPort()
{
	QStringList m_serialPortName;
	const auto infos = QSerialPortInfo::availablePorts();
	for (const QSerialPortInfo& info : infos)
		m_serialPortName << info.portName();
	ui.m_em1Ser->clear();
	ui.m_em2Ser->clear();
	ui.m_em1Ser->addItems(m_serialPortName);
	ui.m_em2Ser->addItems(m_serialPortName);

}
void PushSSDemo::openEmSer1Port()
{
	QString currentPort1Name;
	currentPort1Name = ui.m_em1Ser->currentText();
	if (currentPort1Name.isEmpty())
		return;
	m_emSer1 = new QSerialPort(this);
	if (m_emSer1->isOpen())
	{
		m_emSer1->clear();
		m_emSer1->close();
	}
	m_emSer1->setPortName(currentPort1Name);
	if (!m_emSer1->open(QIODevice::ReadWrite))
	{
		ui.m_info->append(QStringLiteral("发射器1串口打开失败"));
		return;
	}
	m_emSer1->setBaudRate(ui.m_emserBaud->currentText().toInt());
	m_emSer1->setDataBits((QSerialPort::DataBits)(ui.m_emSerWrdLgth->currentIndex() + 5));
	m_emSer1->setFlowControl((QSerialPort::FlowControl)ui.m_emSerChkBit->currentIndex());
	m_emSer1->setStopBits((QSerialPort::StopBits)(ui.m_emSerStpBit->currentIndex() + 1));
	ui.m_info->append(QStringLiteral("发射器1串口打开成功"));
}
void PushSSDemo::openEmSer2Port()
{
	QString currentPort1Name;
	currentPort1Name = ui.m_em2Ser->currentText();
	if (currentPort1Name.isEmpty())
		return;
	m_emSer2 = new QSerialPort(this);
	if (m_emSer2->isOpen())
	{
		m_emSer2->clear();
		m_emSer2->close();
	}
	m_emSer2->setPortName(currentPort1Name);
	if (!m_emSer2->open(QIODevice::ReadWrite))
	{
		ui.m_info->append(QStringLiteral("发射器2串口打开失败"));
		return;
	}
	m_emSer2->setBaudRate(ui.m_emserBaud->currentText().toInt());
	m_emSer2->setDataBits((QSerialPort::DataBits)(ui.m_emSerWrdLgth->currentIndex() + 5));
	m_emSer2->setFlowControl((QSerialPort::FlowControl)ui.m_emSerChkBit->currentIndex());
	m_emSer2->setStopBits((QSerialPort::StopBits)(ui.m_emSerStpBit->currentIndex() + 1));
	ui.m_info->append(QStringLiteral("发射器2串口打开成功"));

}

void PushSSDemo::closeEmSer1Port()
{

	if (m_emSer1)
		m_emSer1->close();
	if(m_emSer1->isOpen())
		ui.m_info->append(QStringLiteral("发射器1串口关闭失败"));
	else
		ui.m_info->append(QStringLiteral("发射器1串口关闭成功"));
}  
void PushSSDemo::closeEmSer2Port()
{
	if (m_emSer2)
		m_emSer2->close();
	if (m_emSer2->isOpen())
		ui.m_info->append(QStringLiteral("发射器2串口关闭失败"));
	else
		ui.m_info->append(QStringLiteral("发射器2串口关闭成功"));

}