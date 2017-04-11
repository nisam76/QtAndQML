import QtQuick 2.0

Rectangle {
	id: rootRect
	width: 125; height: 50
	
	radius: 20

	gradient : Gradient {
		GradientStop { position: 0.0; color: "gray" }
		GradientStop { position: 0.8; color: "darkgray" }
		GradientStop { position: 1.0; color: "black" }
	}

	property string caption	

	Text {
		id: textWidget
		anchors.centerIn: parent
		font.pointSize: 20
		text: caption
		color: "white"
	}

}
