#ifndef THREAD_DLG
#define THREAD_DLG

#include <QWidget>
#include <QListWidget>
#include <QHBoxLayout>
#include <QString>

#include "Thread.h"

class ThreadDlg : public QWidget {
Q_OBJECT
private:
	QListWidget *pListWidget;
	QHBoxLayout *pLayout;
	Thread thread;
	int threadIndex;	
public:
	ThreadDlg(int threadIndex);

public slots:
	void onThreadStarted(int);
	void onThreadStopped(int);
	void onThreadMessageReceived( QString msg ); 
};

#endif /*THREAD_DLG*/
