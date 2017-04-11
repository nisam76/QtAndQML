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

	double first = QInputDialog::getDouble( this,"Input Dialog", "Enter a first number", 0, 100 ); 		

	QString temp;
	temp.setNum ( first );
	QString strMsg = "Value entered is " + temp;

	QMessageBox::information(this, "Information",strMsg ); 

	
}
