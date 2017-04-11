#include <QThread>
#include <QDebug>
#include <QString>

class Thread : public QThread {
Q_OBJECT
private:
	QString name;
public:
	Thread(QString);
protected:
	void run();
};
