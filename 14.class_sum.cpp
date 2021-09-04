#include<iostream>
using namespace std;
class sum
{
    int x,y;
    public:
    void set_val(int a,int b)
    {
        x=a;
        y=b;                            
    }
    int do_sum()
    {
      return x+y;
    }
};
int main()
{
    sum obj1,obj2;
    obj1.set_val(10,20);
    obj2.set_val(13,24);
    cout<<"sum:"<<obj1.do_sum()<<endl;
    cout<<"sum:"<<obj2.do_sum()<<endl;
}