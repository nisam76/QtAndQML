#include <QDebug>
#include <QStack>

int main ( ) {

	QStack<int> numberStack;

	numberStack.push( 1000 );
	numberStack.push( 2000 );
	numberStack.push( 3000 );

	while ( !numberStack.isEmpty() ) {
		qDebug() << numberStack.pop();
	}
	

	return 0;
}
