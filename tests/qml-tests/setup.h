#ifndef SETUP_H
#define SETUP_H

#include <QObject>

QT_FORWARD_DECLARE_CLASS(QQmlEngine)

class Setup : public QObject
{
    Q_OBJECT

private slots:
    void applicationAvailable();
    void qmlEngineAvailable(QQmlEngine* engine);
    void cleanupTestCase();
};

#endif // SETUP_H
