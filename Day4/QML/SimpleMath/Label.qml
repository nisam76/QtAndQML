import QtQuick 2.0

Rectangle {
	width: 240; height: 50

	border.width: 2
	border.color: "green"

	color: "lightgray"
	
	radius: 20

	property alias text : textWidget.text

	Text {
		id: textWidget
		anchors.centerIn: parent
		font.pointSize: 20
	}
}
