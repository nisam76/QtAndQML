import QtQuick 2.0

Rectangle {
	width: 400; height: 50

	border.width: 2
	border.color: "green"
	
	radius: 20

	property alias text : textWidget.text

	TextInput {
		id: textWidget
		anchors.centerIn: parent
		font.pointSize: 20
	}

	MouseArea {
		anchors.fill: parent
		onPressed:
			textWidget.focus = true
	}
}
