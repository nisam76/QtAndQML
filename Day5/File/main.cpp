#include <QDebug>
#include <QString>
#include <QFile>
#include <QTextStream>

void createFile( QString filename ) {

	QFile file(filename);

	file.open( QIODevice::WriteOnly | QIODevice::Text );

	QTextStream writer ( &file );

	writer <<  "Line 1" << endl;
	writer <<  "Line 2" << endl;

	file.close();

}

void readFile ( QString filename ) {
	
	QFile file(filename);

	file.open ( QIODevice::ReadOnly | QIODevice::Text );

	QTextStream reader ( &file );

	while ( !reader.atEnd() ) 
		qDebug() << reader.readLine() << endl;

	file.close();

} 


int main ( ) {
	
	createFile("file.txt");
	readFile("file.txt");

	return 0;
}
