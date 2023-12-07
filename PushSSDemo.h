#pragma once

#include <QtWidgets/QDialog>
#include "ui_PushSSDemo.h"
#include <QtNetwork>
#include <QProcess>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
class QTcpServer;

class PushSSDemo : public QDialog
{
	Q_OBJECT

public:
	PushSSDemo(QWidget *parent = Q_NULLPTR);
	~PushSSDemo();

private:
	Ui::PushSSDemoClass ui;
	QTcpServer* m_tcpServer;
	QTcpSocket* m_clientConnection;
	QString   m_RecMessage;
	quint16  m_blockSize;
	QProcess* m_process;
	QSerialPort* m_emSer1;
	QSerialPort* m_emSer2;
private slots:
	void readMessage();
	void sendMessage();
	void displayError(QAbstractSocket::SocketError);
	void startImgRecMod();
	void read_data();
	void loadSerialPort();
	void openEmSer1Port();
	void openEmSer2Port();
	void closeEmSer1Port();
	void closeEmSer2Port();
};
