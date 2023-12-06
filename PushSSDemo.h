#pragma once

#include <QtWidgets/QDialog>
#include "ui_PushSSDemo.h"
#include<QtNetwork>
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
private slots:
	void readMessage();
	void sendMessage();
	void displayError(QAbstractSocket::SocketError);
};
