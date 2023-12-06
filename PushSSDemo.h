#pragma once

#include <QtWidgets/QDialog>
#include "ui_PushSSDemo.h"

class PushSSDemo : public QDialog
{
	Q_OBJECT

public:
	PushSSDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::PushSSDemoClass ui;
};
