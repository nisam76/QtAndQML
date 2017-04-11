#include <QDialog>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QTextEdit>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QHBoxLayout *pLayout;
	QTextEdit *pTextEdit;

public:
	MyDlg();

};
