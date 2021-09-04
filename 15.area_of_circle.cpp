#include<iostream>
using namespace std;
class mul
{
    int pi,r;
    public:
    void set_val(int a,int b)
    {
        pi=a;
        r=b;                            
    }
    int do_mul()
    {
      return pi*r*r;
    }
};
int main()
{
    mul obj1;
    obj1.set_val(3.14,2);
    cout<<"area of circle:"<<obj1.do_mul()<<endl;
    
}