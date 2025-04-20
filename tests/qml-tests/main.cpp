#include <QtQuickTest/quicktest.h>
#include <QCoreApplication>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString qmlFile;

    if (qEnvironmentVariableIsSet("CI") || qEnvironmentVariableIsSet("GITHUB_ACTIONS")) {
        qmlFile = ":/TestHeadless.qml";  // Environnement CI => QML simple
    } else {
        qmlFile = ":/Main.qml";           // Local PC => vrai Main.qml
    }

    if (!QFileInfo::exists(qmlFile)) {
        qCritical("QML file not found: %s", qUtf8Printable(qmlFile));
        return 1;
    }

    qDebug() << "Trying to load QML:" << qmlFile;
    return quick_test_main(argc, argv, "QmlTests", qmlFile.toUtf8().constData());
}
