#include <QApplication>
#include "MainWindow.h"

int main ( int argc, char **argv ) {

	QApplication theApp ( argc, argv );

	MainWindow wnd;
	wnd.show();

	return theApp.exec();

}
