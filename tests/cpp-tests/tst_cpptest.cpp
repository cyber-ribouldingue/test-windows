#include <QtTest>

class CppTest : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase() { }
    void cleanupTestCase() { }
    void test_case1() {
        QCOMPARE(1 + 1, 2);
    }
};

QTEST_APPLESS_MAIN(CppTest)
#include "tst_cpptest.moc"
