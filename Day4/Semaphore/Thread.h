#include <QThread>
#include <QString>
#include <QDebug>
#include <QSemaphore>

class Thread : public QThread {
private:
	QString name;
	static int count;
	static QSemaphore *pPrinter;

public:
	Thread();

protected:
	void run();


};
