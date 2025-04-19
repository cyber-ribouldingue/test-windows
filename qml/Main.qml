import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello from QmlTests")

    Component.onCompleted: {
        console.log("QML loaded successfully");
    }
}
