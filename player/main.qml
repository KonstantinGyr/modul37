import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Window {
    width: 440
    height: 90
    visible: true
    title: qsTr("MyPlayer")

    Frame{
        id:buttons
        anchors.horizontalCenter: parent.horizontalCenter
      RowLayout{
        anchors.fill: parent
        Button{id:play ; text: "▶️";font.pointSize: 24}
        Button{id:pause ; text: "||";font.pointSize: 25}
        Button{id:rew ; text: "⏪️";font.pointSize: 23}
        Button{id:forw ; text: "⏩️";font.pointSize: 23}
      }
     }
    ProgressBar{
        width: buttons.width
        anchors.horizontalCenter: buttons.horizontalCenter
        anchors.top: buttons.bottom
        anchors.topMargin: 5
        value: 0.3
     }
}

