#include "PushSSDemo.h"

PushSSDemo::PushSSDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_tcpServer = new QTcpServer(this);
	if ((!m_tcpServer->listen(QHostAddress::LocalHost, 9998)))
	{
		ui.m_info->append(QStringLiteral("Socket创建失败"));
		close();
	}
	else
	{
		ui.m_info->append(QStringLiteral("Socket创建成功"));
	}

	connect(m_tcpServer, &QTcpServer::newConnection,
		this, &PushSSDemo::sendMessage);
	
}
PushSSDemo::~PushSSDemo()
{
	m_clientConnection->close();
}
void PushSSDemo::readMessage()
{
	QDataStream in(m_clientConnection);

	in.setVersion(QDataStream::Qt_5_6);

	in >> m_blockSize;
	in >> m_RecMessage;

	ui.m_info->append(m_RecMessage);

}
void PushSSDemo::sendMessage()
{
	m_clientConnection = m_tcpServer->nextPendingConnection();
	QObject::connect(m_clientConnection, &QTcpSocket::readyRead, this, &PushSSDemo::readMessage);
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

	ui.m_info->append(QStringLiteral("连接成功"));

}
void PushSSDemo::displayError(QAbstractSocket::SocketError)
{
	ui.m_info->append(QStringLiteral("未连接，等待连接"));

}