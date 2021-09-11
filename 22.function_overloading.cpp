#include<iostream>
using namespace std;
class area
{
    public:
    void findArea(double a)
    {
        cout<<"\n circle area:"<<3.14*a*a;
    }
    void findArea(double b,double h)
    {
        cout<<"\n tringle area:"<<0.5*b*h;
    }
};
int main()
{
    area obj;
    obj.findArea(2);
    obj.findArea(2,3);
    return 0;
}