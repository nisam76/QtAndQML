#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>

#include "Thread.h"

class MyDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pBttn;
	QHBoxLayout *pLayout;

public:
	MyDlg();

private slots:
	void onButtonClicked();
};
