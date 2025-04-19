#include <QtTest>
#include <QtTest/QtTest>

class Test1 : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase() { }
    void cleanupTestCase() { }
    void test_case1() {
        QVERIFY(true);
    }
};

QTEST_MAIN(Test1)
#include "tst_test1.moc"
