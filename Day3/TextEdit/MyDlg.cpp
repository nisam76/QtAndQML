#include "MyDlg.h"

MyDlg::MyDlg() {

	pLayout = new QHBoxLayout;


	pTextEdit = new QTextEdit;

	pLayout->addWidget ( pTextEdit );
	

	setLayout ( pLayout );
}

