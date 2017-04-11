#include "Account.h"

QMutex Account::mutex;
double Account::balance = 5000.00;

Account::Account(Task task) {
	this->task = task;
}

void Account::deposit( double amount ) {
	mutex.lock();
	balance = balance + amount;
	qDebug() << "Deposited Rs." << amount;
	qDebug() << "Deposit thread : " << "Balance is " << getBalance();
	mutex.unlock();
}

void Account::withdraw( double amount ) {
	mutex.lock();
	if ( balance > amount ) {
		balance = balance - amount;
		qDebug() << "Withdrawn Rs." << amount;
		qDebug() << "Withdraw thread : " << "Balance is " << getBalance();
	}
	mutex.unlock();
}

double Account::getBalance() {
	return balance;
}

void Account::run() {

	while ( 1 ) {
	   switch ( task ) {
		case DEPOSIT:
			deposit(1000.00);
			sleep(1);
			break;

		case WITHDRAW:
			withdraw(2000.00);
			sleep(1);
			break;
	   }
	}

}
