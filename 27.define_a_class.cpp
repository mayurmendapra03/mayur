#include <iostream>
#include <string.h>
using namespace std;
class Airlines
{
    int flightnumber;
    string destination;
    float distance, fuel;
    int powfuel()
    {
        if (distance <= 1000)
            cout << "fuel will be using 500 Ltr For Travelling";
        if (distance > 1000 && distance <= 2000)
            cout << "fuel will be using 1100 Ltr For Travelling";
        if (distance > 2000)
            cout << "fuel will be using 2200 Ltr For Travelling";
        return distance;
    }

public:
    void FEEDINFO()
    {
        cout << "Enter Flight Number :" << endl;
        cin >> flightnumber;
        cout << "Enter Destination :" << endl;
        cin >> destination;
        cout << "Enter Distance :" << endl;
        cin >> distance;
    }
    void SHOWINFO()
    {
        cout << "Your Flight NUmber is :" << flightnumber << endl;
        cout << "Your Destination is :" << destination << endl;
        cout << "Your Distance is :" << distance << endl;
        cout << " " << powfuel();
    }
};
int main()
{
    Airlines fly;
    fly.FEEDINFO();
    fly.SHOWINFO();
}