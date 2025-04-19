import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    id: mainWindow
    visible: true
    width: 640
    height: 480
    title: "Test Window"

    Component.onCompleted: {
        console.log("QML loaded successfully");
    }
}
