import QtQuick 2.0

Rectangle {

	id: rootRect

	width: 500; height: 350

	property double firstNumber
	property double secondNumber
	property double result

	property string operation

	property alias ledValue: led.text

	function evaluate() {
		if ( operation == "+" )
			result = firstNumber + secondNumber
		else if ( operation == "-" )
			result = firstNumber - secondNumber
		else if ( operation == "*" )
			result = firstNumber * secondNumber
		else if ( operation == "/" )
			result = firstNumber / secondNumber

		led.text = result
	}

	Column {
		anchors.horizontalCenter: parent.horizontalCenter
		Spacer{}
		LED { 
			id: led 
		}
		Row {
	   		spacing: 10
			Column {
				spacing: 10
				Spacer { }

				Grid {
				spacing: 10
				rows: 3; columns: 3
					Repeater {
						model: 9 
						Button { }

						onItemAdded:
							item.caption = index+1
					}
				}

				Row {
					spacing: 10
					Button { caption: "." }
					Button { caption: "0"}
				}
			}

			Column {
				spacing: 10
				Spacer { }

				Operator { caption: "+"; textColor:"red" }
				Operator { caption: "-"; textColor:"red" }
				Operator { caption: "*" ; textColor:"red"}
				Operator { caption: "/" ; textColor:"red"}
			}

			Column {
				spacing: 10
				Spacer { }

				Button { 
					caption: "Del"; textColor: "orange" 

					MouseArea {
						anchors.fill: parent

						onPressed: {

						}
	
					}
				}
				Button { 
					caption: "C"; textColor: "orange" 
					MouseArea {
						anchors.fill:parent
					   onPressed: {
						rootRect.ledValue = "0.0"
						firstNumber = 0.0
						secondNumber = 0.0
						result = 0.0
					   }
					}
				}
				Equal { caption: "=" }
			}

		}
	}
}
