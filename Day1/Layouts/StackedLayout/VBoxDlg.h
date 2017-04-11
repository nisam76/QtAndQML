#ifndef VBOX_DLG_H
#define VBOX_DLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

class VBoxDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
public:
	VBoxDlg();
};


#endif /*VBOX_DLG_H*/
