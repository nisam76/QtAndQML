#include <QCoreApplication>
#include "Thread.h"

int main (int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );

	Thread t1, t2, t3, t4, t5;

	t1.start();
	t2.start();
	t3.start();
	t4.start();
	t5.start();

	return theApp.exec();

}
