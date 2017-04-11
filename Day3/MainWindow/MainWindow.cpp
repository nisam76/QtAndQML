#include "MainWindow.h"

MainWindow::MainWindow() {

	
	pMenuBar = new QMenuBar();

	QMenu *pFileMenu = new QMenu("File");
	QMenu *pOpenMenu = new QMenu("Open");
	QMenu *pCloseMenu = new QMenu("Close");
	QMenu *pQuitMenu = new QMenu("Quit Application");

	pFileMenu->addMenu (pOpenMenu );
	
	//pFileMenu->addAction("Alt+O");


	pFileMenu->addMenu (pCloseMenu );
	pFileMenu->addMenu (pQuitMenu );

	QMenu *pEditMenu = new QMenu("Edit");

	pMenuBar->addMenu ( pFileMenu );
	pMenuBar->addMenu ( pEditMenu );

	setMenuBar ( pMenuBar );


	pStatusBar = new QStatusBar();
	pStatusBar->addWidget ( new QLabel("Status Bar") );
	

	setStatusBar ( pStatusBar );


	setCentralWidget ( &window );	
}
