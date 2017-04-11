#include <QVector>
#include <QDebug>

int main ( ) {

	QVector<int> numbers;

	numbers.reserve(30);

	qDebug() << "Capacity of vector is " << numbers.capacity();
	qDebug() << "Size of vector is " << numbers.count();

	for (int count=1; count<15; ++count) {
		numbers.append(count);
		qDebug() << "Capacity of vector is " << numbers.capacity();
		qDebug() << "Size of vector is " << numbers.count();
	}

	return 0;
}
