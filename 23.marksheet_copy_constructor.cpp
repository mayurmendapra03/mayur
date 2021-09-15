#include <iostream>
using namespace std;
class test
{
    int math, phy, chem, roll;

public:
    void getvalue();
    int t();
    int per();
    int m();
    int p();
    int c();
    int r();
};

void test::getvalue()
{
    cout << "enter roll number:";
    cin >> roll;
    cout << "enter math marks:";
    cin >> math;
    cout << "enter physic mark:";
    cin >> phy;
    cout << "enter chemistry:";
    cin >> chem;
}
int test::t()
{
    return math + phy + chem;
}
int test::per()
{
    return (math + phy + chem) / 3;
}
int test::r()
{
    return roll;
}
int test::m()
{
    return math;
}
int test::p()
{
    return phy;
}
int test::c()
{
    return chem;
}

int main()
{
    test t;
    t.getvalue();

    cout << "\n\tRoll\tMATH\tPHY\tCHEM\tTOTAL\tPERCENT\tGRADE\n";
    cout << "\t" << t.r();
    cout << "\t" << t.m();
    cout << "\t" << t.p();
    cout << "\t" << t.c();
    cout << "\t" << t.t();
    cout << "\t" << t.per();
}