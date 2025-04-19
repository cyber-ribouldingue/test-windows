#include <QtTest/QtTest>
#include <QObject>

class TestExample : public QObject
{
    Q_OBJECT

private slots:
    void test_case_1()
    {
        QVERIFY(true);
    }
};

QTEST_MAIN(TestExample)
#include "tst_cpptest.moc"
