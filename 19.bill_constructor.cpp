#include<iostream>
using namespace std;
class bill
{
    int x,y,z,q;
public:
    void getvalue();
    int printgst();
    int total();
    int printtotalwithgst();
    int printx();
    int printy();
    int printz();
    int printq();
};
void bill::getvalue()
{
    cout<<" enter Pro: ";
    cin >> x;
    cout<<" enter Qunt : ";
    cin >> y;
    cout<<" enter Price: ";
    cin >> z;
    cout<<" enter gst: ";
    cin >> q;
}
int bill :: printgst()
{
    return  (q*0.01) * (y * z);
}
int bill :: total()
{
    return  y * z;
}
int bill :: printtotalwithgst()
{
    return  (q * 0.01 * y * z) + (y * z);
}
int bill :: printx()
{
    return x;
}
int bill :: printy()
{
    return y;
}
int bill :: printz()
{
    return z;
}
int bill :: printq()
{
    return q;
}

int main()
{
    bill b;
    b.getvalue();

    cout<<"\n\tPro\tQunt\tPrice\tGst\tG.amount\tTotal\t";
    cout<<"\n\t" << b.printx();
    cout<<"\t" << b.printy();
    cout<<"\t" << b.printz();
    cout<<"\t" << b.printq();
    cout<<"\t" << b.printgst();
    cout<<"\t\t" << b.printtotalwithgst();
    
    return 0;
}


 