#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>

class MyDlg : public QDialog {
private:
	QLineEdit *pEdit;
	QLabel *pFindLabel;
	QPushButton *pBttnClose, *pBttnFind;
	QBoxLayout *pLayout;
public:
	MyDlg();

};
