
   #include <QApplication>
   #include <QDialog>

   int main ( int argc, char **argv ) {

	QApplication theApp ( argc, argv );

	QDialog dlg;
	dlg.show();

	return theApp.exec();

   }
