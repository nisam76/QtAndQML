#include "Thread.h"

int Thread::count = 0;
QSemaphore* Thread::pPrinter = new QSemaphore(2);

Thread::Thread() {
	QString strCount;
	strCount.setNum ( ++count );

	name = "Thread" + strCount;
}

void Thread::run() {

	while ( 1 ) {

		qDebug() << name << " is waiting for the printer ... availability is " 
			 << pPrinter->available() << endl;
		pPrinter->acquire();
		
		qDebug() << name << " printing document ..." << endl;
		sleep(1);

		qDebug() << name << " released printer ..." << endl;

		pPrinter->release();

	}
	
}
