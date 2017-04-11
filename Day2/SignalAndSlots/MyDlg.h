#include <QDialog>
#include <QSpinBox>
#include <QSlider>
#include <QProgressBar>
#include <QVBoxLayout>
#include <QTimer>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QSlider *pSlider;
	QProgressBar *pProgressBar;
	QSpinBox *pSpinBox;
	QTimer *pTimer;
	int count;
public:
	MyDlg();

private slots:
	void onTimerSignal();
};
