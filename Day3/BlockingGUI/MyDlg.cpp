#include "MyDlg.h"

MyDlg::MyDlg() {

	pLayout = new QHBoxLayout;

	pBttn = new QPushButton("Click");

	pLayout->addWidget ( pBttn );

	setLayout ( pLayout );

	connect (
		pBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onButtonClicked() )
	);
}

void MyDlg::onButtonClicked() {
	Thread *pThread = new Thread;
	pThread->start();
}
