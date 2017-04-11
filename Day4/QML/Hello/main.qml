import QtQuick 2.0

Rectangle {
	width: 500; height: 500
	color: "blue"

	Rectangle {
		width: 300; height: 100
		color: "yellow"
		anchors.centerIn: parent
	
		radius: 50

		Text {
			text: "Hello QML"
			font.pointSize: 30
			anchors.centerIn: parent
				
		}

		MouseArea {
			anchors.fill: parent
			onPressed:
				console.log( "Button pressed.")
		}
	}

}
