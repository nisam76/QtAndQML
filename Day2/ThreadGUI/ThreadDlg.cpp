#include "ThreadDlg.h"

ThreadDlg::ThreadDlg(int threadIndex) {
	this->threadIndex = threadIndex;
	pLayout = new QHBoxLayout;

	pListWidget = new QListWidget;

	pLayout->addWidget ( pListWidget );

	setLayout ( pLayout );

	connect (
		&thread,
		SIGNAL ( threadMessage(QString)  ),
		this,
		SLOT ( onThreadMessageReceived(QString) )
	);
}

void ThreadDlg::onThreadStarted(int threadIndex) {
	if ( this->threadIndex == threadIndex)
		thread.start();
}

void ThreadDlg::onThreadStopped(int threadIndex) {
	if ( this->threadIndex == threadIndex)
		thread.terminate();
}

void ThreadDlg::onThreadMessageReceived( QString msg ) {
	pListWidget->addItem ( msg );
	pListWidget->setCurrentRow ( pListWidget->count() - 1 );
}
