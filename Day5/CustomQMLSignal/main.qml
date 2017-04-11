import QtQuick 2.0

Rectangle {
	width: 500; height: 500


	Row {
		anchors.centerIn: parent
		spacing: 40

		Button {
			caption: "First Button"

			onButtonClicked:
				console.log( buttonCaption + " button clicked." )
		}

		Button {
			caption: "Second Button"

			onButtonClicked:
				console.log( buttonCaption + " button clicked." )
		}
	}
}
