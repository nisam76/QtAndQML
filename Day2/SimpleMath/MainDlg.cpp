#include "MainDlg.h"

MainDlg::MainDlg() {
	pAddButton 	= new QPushButton("Add");
	pSubtractButton = new QPushButton("Subtract");
	pMultiplyButton = new QPushButton("Multiply");
	pDivideButton 	= new QPushButton("Divide");
	pCloseButton 	= new QPushButton("Close");

	QBoxLayout *pNavigationLayout = new QBoxLayout(QBoxLayout::RightToLeft);
	pNavigationLayout->addWidget ( pCloseButton );
	pNavigationLayout->addWidget ( pDivideButton );
	pNavigationLayout->addWidget ( pMultiplyButton );
	pNavigationLayout->addWidget ( pSubtractButton );
	pNavigationLayout->addWidget ( pAddButton );
	pNavigationLayout->addStretch( );

	QFormLayout *pFormLayout = new QFormLayout;

	pFirstEdit  = new QLineEdit;	
	pSecondEdit = new QLineEdit;	
	pResultEdit = new QLineEdit;	

	pFormLayout->addRow ( "First Number", pFirstEdit );
	pFormLayout->addRow ( "Second Number", pSecondEdit );
	pFormLayout->addRow ( "Result", pResultEdit );

	pMainLayout = new QVBoxLayout;	
	
	pMainLayout->addLayout ( pFormLayout );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	connect (
		pAddButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onAddButtonClicked() )
	);

	connect (
		pSubtractButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onSubtractButtonClicked() )
	);

	connect (
		pMultiplyButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onMultiplyButtonClicked() )
	);

	connect (
		pDivideButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onDivideButtonClicked() )
	);

	connect (
		pCloseButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onCloseButtonClicked() )
	);
}

void MainDlg::onAddButtonClicked() {
	qDebug() << "Add button clicked." << endl;

	QString strNumber = pFirstEdit->text();
	firstNumber = strNumber.toDouble();

	strNumber = pSecondEdit->text();
	secondNumber = strNumber.toDouble();

	result = firstNumber + secondNumber;

	strNumber.setNum(result);

	pResultEdit->setText ( strNumber );
	
}

void MainDlg::onSubtractButtonClicked() {
	qDebug() << "Subtract button clicked." << endl;

	QString strNumber = pFirstEdit->text();
	firstNumber = strNumber.toDouble();

	strNumber = pSecondEdit->text();
	secondNumber = strNumber.toDouble();

	result = firstNumber - secondNumber;

	strNumber.setNum(result);

	pResultEdit->setText ( strNumber );
}

void MainDlg::onMultiplyButtonClicked() {
	qDebug() << "Multiply button clicked." << endl;

	QString strNumber = pFirstEdit->text();
	firstNumber = strNumber.toDouble();

	strNumber = pSecondEdit->text();
	secondNumber = strNumber.toDouble();

	result = firstNumber * secondNumber;

	strNumber.setNum(result);

	pResultEdit->setText ( strNumber );
}

void MainDlg::onDivideButtonClicked() {
	qDebug() << "Divide button clicked." << endl;

	QString strNumber = pFirstEdit->text();
	firstNumber = strNumber.toDouble();

	strNumber = pSecondEdit->text();
	secondNumber = strNumber.toDouble();

	result = firstNumber / secondNumber;

	strNumber.setNum(result);

	pResultEdit->setText ( strNumber );
}

void MainDlg::onCloseButtonClicked() {
	qDebug() << "Close button clicked." << endl;
	QWidget::close();
}

