#include "MyDlg.h"

MyDlg::MyDlg() {

	pBttn = new QPushButton("Click");

	pLayout = new QHBoxLayout;

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
	qDebug() << "Button clicked." << endl;
}
