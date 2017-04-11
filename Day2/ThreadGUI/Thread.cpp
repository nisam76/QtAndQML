#include "Thread.h"

int Thread::count = 0;

Thread::Thread( ) {
	QString strCount;

	strCount.setNum ( count++ );

	name = "Thread " + strCount;
}
	

void Thread::run() {

	QString strMsg;
	QString strCount;

	for (int count=0; count<32000; ++count) {
		strCount.setNum(count);
		strMsg = "Message => " + strCount + " from " + name;	

		emit threadMessage(strMsg);
		
		sleep(1);
	
		if (count == 31999)
			count = 0;
	}
}
