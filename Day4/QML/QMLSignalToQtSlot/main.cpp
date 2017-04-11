#include <QGuiApplication>
#include <QQuickView>
#include <QQuickItem>

#include "MyObject.h"

int main ( int argc, char **argv ) {

	QGuiApplication theApp (argc, argv);

	QQuickView view;
	view.setSource ( QUrl::fromLocalFile ( "main.qml" ) );


	QQuickItem *pItem = view.rootObject();

	MyObject *pMyObject = new MyObject;

	QObject::connect (
		pItem,
		SIGNAL ( qmlSignal (QString) ),
		pMyObject,
		SLOT ( cppSlot (QString) )
	);

	QObject::connect (
		pMyObject,
		SIGNAL ( cppSignal (QVariant) ),
		pItem,
		SLOT ( qmlSlot (QVariant) )
	);
	
	view.show();

	return theApp.exec();

}
