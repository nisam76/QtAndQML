#include "MyDlg.h"

MyDlg::MyDlg() {

	pWarningButton = new QPushButton("Warning");
	pCriticalButton = new QPushButton("Critical");
	pInfoButton = new QPushButton("Information");
	pQuestionButton = new QPushButton("Question");

	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pWarningButton );
	pLayout->addWidget ( pCriticalButton );
	pLayout->addWidget ( pInfoButton );
	pLayout->addWidget ( pQuestionButton );

	setLayout ( pLayout );

	connect (
		pWarningButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onWarningButtonClicked() )
	);
	connect (
		pCriticalButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onCriticalButtonClicked() )
	);
	connect (
		pInfoButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onInfoButtonClicked() )
	);
	connect (
		pQuestionButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onQuestionButtonClicked() )
	);
}

void MyDlg::onWarningButtonClicked() {
	QMessageBox::warning(this, "Title", "Warning message");
}

void MyDlg::onCriticalButtonClicked() {
	QMessageBox::critical(this, "Title", "Critical message");
}

void MyDlg::onInfoButtonClicked() {
	QMessageBox::information(this, "Title", "Info message");
}

void MyDlg::onQuestionButtonClicked() {
	QMessageBox::question(this, "Title", "Some question");
}
