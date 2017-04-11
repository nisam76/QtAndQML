import QtQuick 2.0

Rectangle {
	width: 800; height: 700

   Text {
	anchors.horizontalCenter: parent.horizontalCenter
	y: 80
	text: "Simple Calculator"
	font.pointSize: 40
	color: "blue"
   }

   property double firstNumber: 0.0
   property double secondNumber: 0.0
   property double result: 0.0

   Rectangle {
	width: 700; height: 400
	border.width: 3
	radius: 30

	anchors.centerIn: parent 

	Column {
	   spacing: 10
	   anchors.centerIn: parent

	   Row {
		spacing: 5
		Label { text: "First Number" }
		Edit { id:edit1 }
	   }

	   Row {
		spacing: 5
		Label { text: "Second Number" }
		Edit { id:edit2 }
	   }

	   Row {
		spacing: 5
		Label { text: "Result" }
		Edit {id:resultEdit}
	   }

	   Spacer { height: 20 }

	   Row {
		spacing: 5
		Spacer { }

		Button { 
			caption: "Add" 
			
			MouseArea {
				anchors.fill: parent
				onPressed: {
					firstNumber = edit1.text
					secondNumber = edit2.text
					result = firstNumber + secondNumber
					resultEdit.text = result
				}
			}
		}

		Button { caption: "Subtract" 
			MouseArea {
				anchors.fill: parent
				onPressed: {
					firstNumber = edit1.text
					secondNumber = edit2.text
					result = firstNumber - secondNumber
					resultEdit.text = result
				}
			}
		}

		Button { caption: "Multiply" 
			MouseArea {
				anchors.fill: parent
				onPressed: {
					firstNumber = edit1.text
					secondNumber = edit2.text
					result = firstNumber * secondNumber
					resultEdit.text = result
				}
			}
		}

		Button { caption: "Divide" 
			MouseArea {
				anchors.fill: parent
				onPressed: {
					firstNumber = edit1.text
					secondNumber = edit2.text
					result = firstNumber / secondNumber
					resultEdit.text = result
				}
			}
		}
	   }
	}
    }
}
