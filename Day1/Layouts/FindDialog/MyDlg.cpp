#include "MyDlg.h"

MyDlg::MyDlg() {
	
	pEdit = new QLineEdit;	
	pFindLabel = new QLabel("Find");

	QHBoxLayout *pFirstRowLayout = new QHBoxLayout;

	pFirstRowLayout->addWidget ( pFindLabel );
	pFirstRowLayout->addWidget ( pEdit );

	QBoxLayout *pSecondRowLayout = new QBoxLayout(QBoxLayout::RightToLeft);

	pBttnClose = new QPushButton("Close");
	pBttnFind  = new QPushButton("Find");

	pSecondRowLayout->addWidget ( pBttnClose );
	pSecondRowLayout->addWidget ( pBttnFind );
	pSecondRowLayout->addStretch ( );

	QBoxLayout *pMainLayout = new QBoxLayout(QBoxLayout::TopToBottom);

	pMainLayout->addLayout( pFirstRowLayout );
	pMainLayout->addLayout ( pSecondRowLayout );

	setLayout ( pMainLayout );
}
