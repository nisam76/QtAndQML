#include "MyDlg.h"

MyDlg::MyDlg() {
	pLayout = new QGridLayout;

	QPushButton *pBttn = NULL;
	QString buttonCaption;
	int count=0;
	
	for (int row=0; row<3; ++row) {
	   for (int col=0; col<4; ++col) {
		buttonCaption.setNum(++count);
		pBttn = new QPushButton(buttonCaption);	
		pLayout->addWidget ( pBttn, row, col );
	   }
	}

	setLayout( pLayout );	
}
