import QtQuick 2.0
import "./controls"

GridView {
    id: navigationKeyboard

    width: 780
    height: 298
    anchors.fill: parent

        Row {
            x:(navigationKeyboard.width - 63*10) / 2
            y:(navigationKeyboard.height - 63*3) / 2
            CircleBtn{
                imgOff: "../res/buttons/preset_btn.png"
                imgOn: "../res/buttons/preset_pressed_btn.png"
                text: "Q"
                pixelSize: 25
            }
            /*Image {
                Text{
                    anchors.centerIn: parent
                    text: "Q"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: qBtn
                source: "res/buttons/preset_btn.png"
             }*/
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "W"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: wBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "E"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: eBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "R"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: rBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "T"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: tBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "Y"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: yBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "U"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: uBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "I"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: iBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "O"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: oBtn
                source: "res/buttons/preset_btn.png"
             }

            Image {
                Text{
                    anchors.centerIn: parent
                    text: "P"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: pBtn
                source: "res/buttons/preset_btn.png"
             }
        }

        Row {
            x:(navigationKeyboard.width - 63*11) / 2
            y:(navigationKeyboard.height - 63*3) / 2 + 63

            Image {
                Text{
                    anchors.centerIn: parent
                    text: "123"
                    color: "#1d81d5"
                    font.pixelSize: 17
                }

                id: numbersBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "A"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: aBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "S"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: sBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "D"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: dBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "F"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: fBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "G"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: gBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "H"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: hBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "J"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: jBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "K"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: kBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "L"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: lBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                id: bspaceBtn
                source: "res/buttons/preset_btn.png"

                Image{
                    anchors.centerIn: parent
                    source: "res/buttons/deleteIcon.png"
                }

             }
        }

        Row {
            x:(navigationKeyboard.width - 63*10) / 2
            y:(navigationKeyboard.height - 63*3) / 2 + 126
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "!@#"
                    color: "#1d81d5"
                    font.pixelSize: 17
                }

                id: symbolBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "Z"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: zBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "X"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: xBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "C"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: cBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "V"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: vBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "B"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: bBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "N"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: nBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "M"
                    color: "#1d81d5"
                    font.pixelSize: 25
                }

                id: mBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "Clear"
                    color: "#1d81d5"
                    font.pixelSize: 13
                }

                id: clearBtn
                source: "res/buttons/preset_btn.png"
             }
            Image {
                Text{
                    anchors.centerIn: parent
                    text: "Space"
                    color: "#1d81d5"
                    font.pixelSize: 13
                }

                id: spacelearBtn
                source: "res/buttons/preset_btn.png"
             }
        }

        Image {
            anchors.right: parent.right
            anchors.top: parent.top
            Text{
                anchors.centerIn: parent
                text: "Go"
                color: "#1d81d5"
                font.pixelSize: 25
            }
            id: goBtn
            source: "res/buttons/short_oval_btn.png"

            MouseArea {
                cursorShape: Qt.PointingHandCursor
                anchors.fill: parent
                onClicked: {
                    menuContainer.go("NavigationInRouteGridView.qml")
                }
            }
        }

        Text{
            id: closeText
            anchors.horizontalCenter: parent.horizontalCenter
            y:250
            text: "Close"
            color: "#1d81d5"
            font.pixelSize: 25
            MouseArea {
              anchors.fill: parent
              onClicked: {
                  menuContainer.go("NavigationMenuGridView.qml")
                }
            }
        }

}




