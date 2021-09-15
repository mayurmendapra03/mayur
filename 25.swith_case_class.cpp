#include <iostream>
using namespace std;
class con
{
    int x, y;
    public:
    int set_val();
    void  get_val();
    int add();
    int subtrack();
    int multiply();
    int divide(); 
};
int con::set_val()
{
     int choice;
     do
    {
       get_val();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << "sum" << add() << endl;
            break;
        case 2:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << " differece " << subtrack() << endl;
            break;
        case 3:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << " product " << multiply() << endl;
            break;
        case 4:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << "quotient" << divide() << endl;
            break;
        case 5:
             break;
            default:
                cout<<"invalid input"<<endl;
        }
    } while (choice != 5);
    return 0;
}
void con :: get_val()
{
    cout << "menu" << endl;
    cout << "1.add" << endl;
    cout << "2.subtract" << endl;
    cout << "3.multiply" << endl;
    cout << "4.divide" << endl;
    cout << "5.exit" << endl;
    cout << "enter your choice:" << endl;
}
int con:: add()
{
    return x+y;
}
int con:: subtrack()
{
    return x-y;
}
int con:: multiply()
{
    return x*y;
}
int con:: divide()
{
    return x/y;
}
int main()
{
        con c1;
         c1.set_val();
}