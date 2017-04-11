#include <QDialog>
#include <QInputDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>

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
