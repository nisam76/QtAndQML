#include <QDialog>
#include <QTabWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QDebug>

#include "ThreadDlg.h"

class MainDlg : public QDialog {
Q_OBJECT
private:
	QTabWidget *pTabWidget;
	QVBoxLayout *pMainLayout;
	QBoxLayout *pNavigationLayout;
	QPushButton *pNewButton, *pStartButton, *pStopButton, *pCloseButton;
	int count;
public:
	MainDlg();

signals:
	void startThread(int);
	void stopThread(int);

private slots:
	void onNewButtonClicked();
	void onStartButtonClicked();
	void onStopButtonClicked();
	void onCloseButtonClicked();
};
