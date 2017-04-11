#include <QObject>
#include <QDebug>
#include <QVariant>

class MyObject : public QObject {
Q_OBJECT

signals:
	void cppSignal ( QVariant );

public slots:
	void cppSlot( QString );

};
