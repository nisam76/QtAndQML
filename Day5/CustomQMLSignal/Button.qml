import QtQuick 2.0

Rectangle {
	width: 180; height: 60

	radius: 20

	property string caption
	property string textColor: "white" 

	signal buttonClicked( string buttonCaption )

	gradient : Gradient {
		GradientStop { position: 0.0; color: "black" }
		GradientStop { position: 0.8; color: "darkgray" }
		GradientStop { position: 1.0; color: "white" }
	}

	Text {
		anchors.centerIn: parent
		font.pointSize: 18
		text: caption	
		color: textColor 
	}

	MouseArea {
		anchors.fill: parent
		hoverEnabled: true

		onPressed:
			buttonClicked( caption )

		onEntered: {
			parent.scale = 1.2
			parent.textColor = "red"
		}

		onExited: {
			parent.scale = 1.0
			parent.textColor = "white"
		}
			
	}
}
