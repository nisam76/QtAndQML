#include "MyDlg.h"

MyDlg::MyDlg() {
	pLayout = new QGridLayout;
	
	QString buttonCaption;
	int count = 0;
	QPushButton *pBttn = NULL;

	for (int col=0; col<4; ++col) {
		buttonCaption.setNum(++count);
		pBttn = new QPushButton(buttonCaption);	
		pLayout->addWidget ( pBttn, 0, col );
	}


	QPushButton *pBttn5 = new QPushButton("Row 2 Column 0-3");
	pBttn5->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );

	pLayout->addWidget ( pBttn5, 1, 0, 2, 4 );

	setLayout( pLayout );	
}
