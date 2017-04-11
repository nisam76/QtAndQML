#include <QWidget>
#include <QFormLayout>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

class MainDlg : public QWidget {
Q_OBJECT
private:
	QPushButton *pAddButton, *pSubtractButton, *pMultiplyButton, *pDivideButton;	       
	QPushButton *pCloseButton;
	QVBoxLayout *pMainLayout;

	QLineEdit *pFirstEdit, *pSecondEdit, *pResultEdit;

	double firstNumber, secondNumber, result;

public:
	MainDlg();

private slots:
	void onAddButtonClicked();
	void onSubtractButtonClicked();
	void onMultiplyButtonClicked();
	void onDivideButtonClicked();
	void onCloseButtonClicked();
};
