import QtQuick 2.0

Rectangle {
   width: 450; height: 50
   color: "black"

   property alias text : textWidget.text 

   Rectangle {
	width: 445; height: 45
	anchors.centerIn: parent

	color: "#c8ced5"
	radius: 10

	border.color: "lightgray"


	Text {
		id: textWidget
		anchors.centerIn: parent
		font.pointSize: 14
	}
   }
}
