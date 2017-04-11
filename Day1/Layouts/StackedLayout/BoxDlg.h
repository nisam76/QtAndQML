#ifndef BOX_DLG
#define BOX_DLG

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

class BoxDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
public:
	BoxDlg();
};

#endif /*HBOX_DLG*/
