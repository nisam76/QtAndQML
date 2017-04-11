#include <QThread>
#include <QDebug>

class Thread : public QThread {
protected:
	void run();
};
