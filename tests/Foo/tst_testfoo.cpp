#include <QtTest>

#include "modelfoo.h"
// add necessary includes here

class TestFoo : public QObject
{
    Q_OBJECT

public:
    TestFoo();
    ~TestFoo();

private slots:
    void test_case1();

};

TestFoo::TestFoo()
{

}

TestFoo::~TestFoo()
{

}

void TestFoo::test_case1()
{
    ModelFoo m;
    QVERIFY(m.init());
}

QTEST_APPLESS_MAIN(TestFoo)

#include "tst_testfoo.moc"
