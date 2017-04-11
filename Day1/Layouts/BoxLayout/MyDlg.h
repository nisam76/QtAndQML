#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

class MyDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
	QBoxLayout *pLayout;
public:
	MyDlg();

};
