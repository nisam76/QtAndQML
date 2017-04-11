#include <QWidget>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QGroupBox>

class MyDlg : public QWidget {
Q_OBJECT
private:
	QHBoxLayout *pLayout;
	QRadioButton *pMale, *pFemale, *pSeniorYes, *pSeniorNo;
	
	QGroupBox *pSexGroup, *pSeniorCitizenGroup;

public:
	MyDlg();

};
