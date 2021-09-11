#include<iostream>
using namespace std;
class bill
{
    int qtu, rate;
    public:
        void get_data();
        int total();
        float gst();
        float total_amo();
        int data();
        int print();
};
void bill::get_data()
{
    cout << "\n enter qtu:";
    cin >>qtu;
    cout << "\n enter rate:";
    cin >> rate;
}
int bill::total()
{
    return qtu * rate;
}
float bill::gst()
{
    return (qtu * rate) * 0.12;
}
float bill::total_amo()
{
    return (qtu * rate) * 1.12;
}
int bill::data()
{
    return qtu;
}
int bill::print()
{
    return rate;
}
int main()
{
    bill b1;
    b1.get_data();
    cout << "\n total:" << b1.total();
    cout << "\n gst:" << b1.gst();
    cout<<"\n total_amo:"<<b1.total_amo();
    cout << "\n---------------------------------------------";
    cout << "\nqtu     rate    total    gst    total_amo";
    cout <<"\n"<<b1.data()<<"\t"<<b1.print()<<"\t"<<b1.total()<<"\t"<<b1.gst()<<"\t"<<b1.total_amo();
    cout << "\n---------------------------------------------";
    return 0;
}

