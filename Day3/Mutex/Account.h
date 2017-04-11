#include <QThread>
#include <QDebug>
#include <QMutexLocker>
#include <QMutex>

enum Task {
	DEPOSIT,
	WITHDRAW
};

class Account : public QThread {
private:
	static double balance;
	Task task;
	static QMutex mutex;

public:
	Account(Task);
	void deposit( double );
	void withdraw ( double );
	double getBalance();
protected:
	void run();
};
