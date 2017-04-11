#include "MainDlg.h"

MainDlg::MainDlg() {
	pHBoxDlg = new HBoxDlg;
	pVBoxDlg = new VBoxDlg;
	pBoxDlg = new BoxDlg;

	pStackedLayout = new QStackedLayout;

	pStackedLayout->addWidget ( pHBoxDlg );
	pStackedLayout->addWidget ( pVBoxDlg );
	pStackedLayout->addWidget ( pBoxDlg );

	pNavigationLayout = new QBoxLayout(QBoxLayout::RightToLeft);

	pCloseBttn = new QPushButton("Close");
	pPrevBttn  = new QPushButton("Previous");
	pNextBttn  = new QPushButton("Next");

	pNavigationLayout->addWidget ( pCloseBttn );
	pNavigationLayout->addWidget ( pNextBttn );
	pNavigationLayout->addWidget ( pPrevBttn );
	pNavigationLayout->addStretch( );

	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout ( pStackedLayout );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	connect (
		pCloseBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onCloseButtonClicked() )
	);
	connect (
		pNextBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNextButtonClicked() )
	);
	connect (
		pPrevBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onPrevButtonClicked() )
	);
}

void MainDlg::onCloseButtonClicked() {
	qDebug() << "Close button clicked." << endl;
	QDialog::close();
}

void MainDlg::onPrevButtonClicked() {
	qDebug() << "Prev button clicked." << endl;

	int currentWindowIndex = pStackedLayout->currentIndex();
	
	if ( currentWindowIndex > 0 )
		pStackedLayout->setCurrentIndex ( --currentWindowIndex );

}

void MainDlg::onNextButtonClicked() {
	qDebug() << "Next button clicked." << endl;
	int currentWindowIndex = pStackedLayout->currentIndex();
	
	if ( currentWindowIndex < 2 )
		pStackedLayout->setCurrentIndex ( ++currentWindowIndex );

}
