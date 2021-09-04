#include<iostream>
using namespace std;
class mul
{
    int width,hieght;
    public:
    void set_val(int a,int b)
    {
        width=a;
        hieght=b;                            
    }
    int do_mul()
    {
      return 0.5 * width * hieght;
    }
};
int main()
{
    mul obj1;
    obj1.set_val(10,6);
    cout<<"area of triangle:"<<obj1.do_mul()<<endl;
    
}