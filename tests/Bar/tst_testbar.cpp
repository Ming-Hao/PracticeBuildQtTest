#include <QtTest>

#include "modelbar.h"
// add necessary includes here

class TestBar : public QObject
{
    Q_OBJECT

public:
    TestBar();
    ~TestBar();

private slots:
    void test_case1();
    void test_cast2();

};

TestBar::TestBar()
{

}

TestBar::~TestBar()
{

}

void TestBar::test_case1()
{
    ModelBar m;
    QCOMPARE(m.val(), 42);
}

void TestBar::test_cast2()
{
    ModelBar m;
    m.setVal(100);
    QCOMPARE(m.val(), 100);
}

QTEST_APPLESS_MAIN(TestBar)

#include "tst_testbar.moc"
