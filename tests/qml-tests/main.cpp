#include <QtQuickTest/quicktest.h>
#include <QCoreApplication>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString qmlFile;

    // Si on détecte un environnement CI (comme GitHub Actions)
    if (qEnvironmentVariableIsSet("CI") || qEnvironmentVariableIsSet("GITHUB_ACTIONS")) {
        qmlFile = ":/TestHeadless.qml";
    } else {
        qmlFile = ":/Main.qml";
    }

    if (!QFileInfo::exists(qmlFile)) {
        qCritical("QML file not found: %s", qUtf8Printable(qmlFile));
        return 1;
    }

    qDebug() << "Loading QML file:" << qmlFile;

    return quick_test_main(argc, argv, "QmlTests", qmlFile.toUtf8().constData());
}
