#include <QCoreApplication>
#include "Account.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );

	Account depositor(Task::DEPOSIT);
	Account withdrawer(Task::WITHDRAW);

	depositor.start();
	withdrawer.start();

	return theApp.exec();

}
