#include "SubWindow.h"

SubWindow::SubWindow() {
	pLayout = new QHBoxLayout;

	pTextEdit = new QTextEdit;

	pLayout->addWidget ( pTextEdit );

	setLayout ( pLayout );
}
