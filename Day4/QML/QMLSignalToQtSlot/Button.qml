import QtQuick 2.0

Rectangle {
	width: 200 ; height: 50
	property string caption

	radius: 15

	property string textColor: "blue"

	signal buttonClicked ( )

	Rectangle {
		width: 180; height: 48
		radius: 15
		border.color: "black"
		anchors.centerIn: parent

		gradient: Gradient {
			GradientStop { position: 1.0; color: "#b2bbc3" }
			GradientStop { position: 0.7; color: "#919daa" }
			GradientStop { position: 1.0; color: "black" }
		}
	}

	Text {
		anchors.centerIn: parent
		text: caption
		font.pointSize:18 
		color: textColor 
		font.bold: true
	}

	MouseArea {
		anchors.fill: parent

		onPressed:
			buttonClicked()
	}

}
