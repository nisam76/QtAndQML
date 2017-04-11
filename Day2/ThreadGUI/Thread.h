#include <QThread>
#include <QString>

class Thread : public QThread {
Q_OBJECT
private:
	QString name;
	static int count;
public:
	Thread();
protected:
	void run();
signals:
	void threadMessage(QString);
};
