import QtQuick

Window {
    width: 640
    height: 480
    visible: trueimport QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello from Test")

    Component.onCompleted: {
        console.log("QML loaded successfully");
    }
}

    title: qsTr("Hello World")

    Text {
        anchors.centerIn: parent
        text: "Hello World"
    }
}
