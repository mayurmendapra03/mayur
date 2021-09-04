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
    void get_val()
    {
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }
};
int main()
{
    sum obj1;
    obj1.set_val(10,20);
    obj1.get_val();
}