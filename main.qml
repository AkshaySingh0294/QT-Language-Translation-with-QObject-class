import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("haiho") + hhh.empty



    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {
        }

        Page {
            Label {
                text: qsTr("Second page") + hhh.empty
                anchors.centerIn: parent
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("First") + hhh.empty
        }
        TabButton {
            text: qsTr("Second") + hhh.empty
        }
    }


    Button
    {
        x:50
        y:50
        text: qsTr("Chinese") +hhh.empty
        onClicked:{
            hhh.call()}
    }


    Button
    {
        x:100
        y:100
        text: qsTr("Hindi") +hhh.empty
        onClicked:{
            hhh.call2()}
    }
}
