#include "MyObject.h"

void MyObject::cppSlot ( QString message ) {
	qDebug() << message << endl;

	emit cppSignal ("Acknowledge: Message Received");
}
