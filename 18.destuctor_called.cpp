#include<iostream>
using namespace std;
class con
{
    int n;
    public:
    con(int x)
    {
        n=x;
        cout<<"\nCounstructor called"<<n;
    }
    ~con() //tield
    {
        cout<<"\nCounstructor called"<<n;
    }
};
int main()
{
    con c1(1),c2(2),c3(3),c4(4);
    return 0;
}