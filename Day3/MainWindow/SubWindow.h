#include <QWidget>
#include <QHBoxLayout>
#include <QTextEdit>

class SubWindow : public QWidget {
private:
	QHBoxLayout *pLayout;
	QTextEdit *pTextEdit;
public:
	SubWindow();

};
