#include "FileExplorerDlg.h"

FileExplorerDlg::FileExplorerDlg() {

	pLayout = new QHBoxLayout;

	pTreeModel = new QFileSystemModel();
	pTreeModel->setRootPath("/");
	pTreeModel->setFilter ( QDir::AllDirs|QDir::Drives|QDir::NoDotAndDotDot );

	pListModel = new QFileSystemModel();
	pListModel->setRootPath("/home/train/Trainings");
	pTreeModel->setFilter ( QDir::AllDirs|QDir::NoDotAndDotDot|QDir::Files );

	pListModel = new QFileSystemModel();

	pTreeWidget = new QTreeView();
	pTreeWidget->setModel ( pTreeModel );

	pTreeWidget->setColumnHidden ( 1, true );
	pTreeWidget->setColumnHidden ( 2, true );
	pTreeWidget->setColumnHidden ( 3, true );

	pListWidget = new QListView();
	pListWidget->setModel( pListModel );

	pListWidget->setViewMode ( QListView::IconMode );

	pSplitter = new QSplitter;
	//pSplitter->setOrientation ( Qt::Vertical );

	pSplitter->addWidget( pTreeWidget );
	pSplitter->addWidget( pListWidget );

	pLayout->addWidget ( pSplitter );

	setLayout ( pLayout );

	connect (
		pTreeWidget,
		SIGNAL ( clicked(const QModelIndex&) ),
		this,
		SLOT ( onTreePathChanged(const QModelIndex&) )
	);
	
}

void FileExplorerDlg::onTreePathChanged(const QModelIndex &index) {
	QString strPath = pTreeModel->fileInfo(index).absoluteFilePath();
	pListWidget->setRootIndex( pListModel->setRootPath( strPath ) );
}
