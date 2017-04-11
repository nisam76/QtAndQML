

#include <QApplication>
#include "MyDlg.h"

int main ( int argc, char **argv ) {

	QApplication theApp(argc, argv);

	//theApp.setStyleSheet ( "QGroupBox { border: 5px solid gray; }" );

	MyDlg dlg;
	dlg.show();

	return theApp.exec();

}
