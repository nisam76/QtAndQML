#include "MyDlg.h"

MyDlg::MyDlg() {
	pTableView = new QTableView;
	pTableView->resizeColumnsToContents();
	pTableView->resizeRowsToContents();

	QStandardItemModel *pModel = new QStandardItemModel(3, 2, this);
	pModel->setHorizontalHeaderItem(0, new QStandardItem(QString("Training")));
	pModel->setHorizontalHeaderItem(1, new QStandardItem(QString("Duration")));

	pModel->setItem( 0, 0, new QStandardItem(QString("Qt & QML Training")) ); 
	pModel->setItem( 0, 1, new QStandardItem(QString("5 days")) ); 

	pModel->setItem( 1, 0, new QStandardItem(QString("DevOps")) ); 
	pModel->setItem( 1, 1, new QStandardItem(QString("3 days")) ); 

	pModel->setItem( 2, 0, new QStandardItem(QString("Test Driven Development")) ); 
	pModel->setItem( 2, 1, new QStandardItem(QString("3 days")) ); 

	pTableView->setModel ( pModel );

	pMainLayout = new QVBoxLayout;

	QPushButton *pBttn = new QPushButton("Export to PDF");
	
	pMainLayout->addWidget ( pTableView );
	pMainLayout->addWidget ( pBttn );

	setLayout ( pMainLayout );

	connect (
		pBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( exportToPDF() )
	);
}

void MyDlg::exportToPDF() {
    	QPrinter printer(QPrinter::PrinterResolution);
  	printer.setOutputFormat(QPrinter::PdfFormat);
    	printer.setPaperSize(QPrinter::A4);
    	printer.setOutputFileName("Table.pdf");

    	QStandardItemModel *pTableModel = 
		dynamic_cast<QStandardItemModel*>(pTableView->model());

	int width = 16;
	int height = 20; 
	int columns = pTableModel->columnCount();
	int rows = pTableModel->rowCount();

	for( int index = 0; index < columns; ++index ) 
    		width += pTableView->columnWidth(index);

	for( int index = 0; index < rows; ++index ) 
    		height += pTableView->rowHeight(index);

	pTableView->setFixedSize(width, height);
	pTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	pTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	pTableView->render(&printer);
}
