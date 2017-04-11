#include "MyDlg.h"

MyDlg::MyDlg() {

	pLayout = new QHBoxLayout;

	pMale = new QRadioButton("Male");
	pFemale = new QRadioButton("Female");
	pSeniorYes = new QRadioButton("Yes");
	pSeniorNo = new QRadioButton("No");


	QHBoxLayout *pSexLayout = new QHBoxLayout;

	pSexLayout->addWidget ( pMale );
	pSexLayout->addWidget ( pFemale );

	pSexGroup = new QGroupBox("Sex");

	pSexGroup->setLayout ( pSexLayout );


	QHBoxLayout *pSeniorCitizenLayout = new QHBoxLayout;

	pSeniorCitizenLayout->addWidget ( pSeniorYes);
	pSeniorCitizenLayout->addWidget ( pSeniorNo );

	pSeniorCitizenGroup= new QGroupBox("Senior Citizen");

	pSeniorCitizenGroup->setLayout ( pSeniorCitizenLayout );

	pLayout->addWidget ( pSexGroup );
	pLayout->addWidget ( pSeniorCitizenGroup );

	//theApp.setStyleSheet ( "QGroupBox { border: 5px solid gray; }" );
	pSexGroup->setStyleSheet ( "QGroupBox { border: 2px solid blue; }" );	
	pSeniorCitizenGroup->setStyleSheet ( "QGroupBox { border: 5px solid green; }" );	

	setLayout ( pLayout );
}

