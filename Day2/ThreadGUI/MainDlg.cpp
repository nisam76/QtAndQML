#include "MainDlg.h"

MainDlg::MainDlg() {
	count = 0;

	pNavigationLayout = new QBoxLayout(QBoxLayout::LeftToRight);

	pNewButton = new QPushButton("New Thread");
	pStartButton = new QPushButton("Start Thread");
	pStopButton = new QPushButton("Stop Thread");
	pCloseButton = new QPushButton("Quit App");

	pNavigationLayout->addStretch( );
	pNavigationLayout->addWidget ( pNewButton );
	pNavigationLayout->addWidget ( pStartButton );
	pNavigationLayout->addWidget ( pStopButton );
	pNavigationLayout->addWidget ( pCloseButton );

	pMainLayout = new QVBoxLayout;

	pTabWidget = new QTabWidget;

	pMainLayout->addWidget ( pTabWidget );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	connect (
		pNewButton, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNewButtonClicked() )
	);
	connect (
		pStartButton, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onStartButtonClicked() )
	);
	connect (
		pStopButton, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onStopButtonClicked() )
	);
	connect (
		pCloseButton, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onCloseButtonClicked() )
	);

}

void MainDlg::onNewButtonClicked() {
	qDebug() << "New button clicked.";

	QString strCount;
	strCount.setNum ( count );

	QString tabCaption = "Thread " + strCount; 

	ThreadDlg *pThreadDlg = new ThreadDlg(count++);

	connect(
		this,
		SIGNAL ( startThread(int) ),
		pThreadDlg,
		SLOT ( onThreadStarted(int) )
	);
	connect(
		this,
		SIGNAL ( stopThread(int) ),
		pThreadDlg,
		SLOT ( onThreadStopped(int) )
	);

	pTabWidget->addTab ( pThreadDlg, tabCaption );
}

void MainDlg::onStartButtonClicked() {
	qDebug() << "Start button clicked.";
	int threadIndex = pTabWidget->currentIndex();
	emit startThread(threadIndex);
}

void MainDlg::onStopButtonClicked() {
	qDebug() << "Stop button clicked.";
	int threadIndex = pTabWidget->currentIndex();
	emit stopThread(threadIndex);
}

void MainDlg::onCloseButtonClicked() {
	qDebug() << "Close button clicked.";
	QDialog::close();
}
