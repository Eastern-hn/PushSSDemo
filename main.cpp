#include "PushSSDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PushSSDemo w;
	w.show();
	return a.exec();
}
