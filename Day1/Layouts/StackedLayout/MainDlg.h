#include <QDialog>
#include <QStackedLayout>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QDebug>

#include "HBoxDlg.h"
#include "VBoxDlg.h"
#include "BoxDlg.h"

class MainDlg : public QDialog {
Q_OBJECT
private:
	HBoxDlg *pHBoxDlg;
	VBoxDlg *pVBoxDlg;
	BoxDlg *pBoxDlg;

	QPushButton *pCloseBttn, *pPrevBttn, *pNextBttn;

	QStackedLayout *pStackedLayout;
	QBoxLayout *pNavigationLayout;
	QVBoxLayout *pMainLayout;
public:
	MainDlg();

private slots:
	void onCloseButtonClicked();
	void onPrevButtonClicked();
	void onNextButtonClicked();
};
	
	
