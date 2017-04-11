import QtQuick 2.0

Rectangle {

	width: 500; height: 500

	signal qmlSignal ( string message )

	function qmlSlot ( message ) {
		console.log ( message )
	}

	Button {
		anchors.centerIn: parent

		caption: "Emit Signal"

		onButtonClicked:
			qmlSignal( "QML Signal" )
			
	}

}
