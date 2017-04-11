#include <QDialog>
#include <QSplitter>
#include <QTreeView>
#include <QListView>
#include <QHBoxLayout>
#include <QFileSystemModel>

class FileExplorerDlg : public QDialog {
Q_OBJECT
private:
	QHBoxLayout *pLayout;
	QTreeView *pTreeWidget;
	QListView *pListWidget;
	QSplitter *pSplitter;

	QFileSystemModel *pTreeModel, *pListModel;
public:
	FileExplorerDlg();
private slots:
	void onTreePathChanged(const QModelIndex &index); 
};
