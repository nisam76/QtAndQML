#include <QMainWindow>
#include <QMenuBar>
#include <QStatusBar>
#include <QMenu>
#include <QPushButton>
#include <QLabel>

#include "SubWindow.h"

class MainWindow : public QMainWindow {
private:
	SubWindow window;
	QMenuBar *pMenuBar;
	QStatusBar *pStatusBar;
public:
	MainWindow();
};
