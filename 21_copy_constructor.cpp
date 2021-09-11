#include<iostream>
using namespace std;
class area
{
    public:
    area(double a)
    {
        cout<<"\n circle area:"<<3.14*a*a;
    }
    area(double b,double h)
    {
        cout<<"\n tringle area:"<<0.5*b*h;
    }
};
int main()
{
    area obj1(2),obj2(2,3);
    return 0;
}