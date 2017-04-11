#include "Thread.h"

Thread::Thread(QString name) {
	this->name = name;
}

void Thread::run() {
	
	for(int count=0; count<3; ++count) {
	
		qDebug() << "Message " << count << " "  << name << endl;

	}

}

