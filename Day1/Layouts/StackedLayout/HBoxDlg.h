#ifndef HBOX_DLG
#define HBOX_DLG

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>

class HBoxDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
public:
	HBoxDlg();
};

#endif /*HBOX_DLG*/
