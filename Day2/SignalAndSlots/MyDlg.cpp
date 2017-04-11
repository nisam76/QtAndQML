#include "MyDlg.h"

MyDlg::MyDlg() {
	count = 0;
	pSlider = new QSlider;
	pProgressBar = new QProgressBar;
	pSpinBox = new QSpinBox;

	QVBoxLayout *pLayout = new QVBoxLayout;
	pLayout->addWidget ( pSlider );
	pLayout->addWidget ( pProgressBar );
	pLayout->addWidget ( pSpinBox);

	setLayout ( pLayout );

	pTimer = new QTimer;
	pTimer->start(500);

	connect ( pTimer,
		  SIGNAL(timeout()),
		  this,
		  SLOT ( onTimerSignal() )
	);

	connect (
		pSlider,
		SIGNAL ( valueChanged(int) ),
		pProgressBar,
		SLOT ( setValue (int) )
	);

	connect (
		pSlider,
		SIGNAL ( valueChanged(int) ),
		pSpinBox,
		SLOT ( setValue (int) )
	);

	connect (
		pSpinBox,
		SIGNAL ( valueChanged(int) ),
		pSlider,
		SLOT ( setValue (int) )
	);
}

void MyDlg::onTimerSignal() {
	pSlider->setValue ( ++count );	
	if ( count == 99 )
		count = 0;
}

