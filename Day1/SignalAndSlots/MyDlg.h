#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pBttn;
	QHBoxLayout *pLayout;
public:
	MyDlg();

public slots:
	void onButtonClicked();
};
