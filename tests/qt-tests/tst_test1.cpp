#include <QtTest/QtTest>

class Test1 : public QObject
{
    Q_OBJECT

private slots:
    void exampleTest()
    {
        QVERIFY2(true, "This is a placeholder test");
    }
};

QTEST_MAIN(Test1)
#include "tst_test1.moc"
