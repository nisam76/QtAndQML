#include <QDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QHBoxLayout>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pWarningButton, *pInfoButton, *pCriticalButton, *pQuestionButton;
	QHBoxLayout *pLayout;
	
public:
	MyDlg();

private slots:
	void onWarningButtonClicked();
	void onInfoButtonClicked();
	void onCriticalButtonClicked();
	void onQuestionButtonClicked();
};
