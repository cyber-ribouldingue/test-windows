#include <QtQuickTest/quicktest.h>
#include <QCoreApplication>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString qmlFile;

    if (qEnvironmentVariableIsSet("CI") || qEnvironmentVariableIsSet("GITHUB_ACTIONS")) {
        qmlFile = ":/TestHeadless.qml";  // Chargement spécial pour CI
    } else {
        qmlFile = ":/Main.qml";           // Chargement normal local
    }

    if (!QFileInfo::exists(qmlFile)) {
        qCritical("QML file not found: %s", qUtf8Printable(qmlFile));
        return 1;
    }

    qDebug() << "Loading QML file:" << qmlFile;

    return quick_test_main(argc, argv, "QmlTests", qmlFile.toUtf8().constData());
}
