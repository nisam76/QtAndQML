#include <QDialog>
#include <QTableView>
#include <QStandardItemModel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>
#include <QPrinter>
#include <QTextDocument>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QTableView *pTableView;
	QVBoxLayout *pMainLayout;
	QHBoxLayout *pLayout;
public:
	MyDlg();
private slots:
	void exportToPDF();
};
