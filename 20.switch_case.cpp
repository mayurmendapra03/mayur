#include<iostream>
using namespace std;
void showchoices();
float add (float,float);
float subtract (float,float);
float multiply (float,float);
float divide (float,float); 

int main()
{
    float x,y;
    int choice; 

    do
    {
        showchoices();
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout<<"enter two numbers:";
                cin>>x>>y;
                cout<<"sum"<<add(x,y)<<endl;
                break;
            case 2:
                cout<<"enter two numbers:";
                cin>>x>>y;
                cout<<"difference"<<subtract(x,y)<<endl;
                break;
            case 3:
                cout<<"enter two numbers:";
                cin>>x>>y;
                cout<<"product"<<multiply(x,y)<<endl;
                break;
            case 4:
                cout<<"enter two numbers:";
                cin>>x>>y;
                cout<<"quotient"<<divide(x,y)<<endl;
                break;
            case 5:
                break;
            default:
                cout << "invalid input<<endl";
        }

    } while (choice !=5);
         return 0;
}
void showchoices()
{
    cout<<"Menu"<<endl;
    cout<<"1:Add"<<endl;
    cout<<"2:Subtract"<<endl;
    cout<<"3:Multiply"<<endl;
    cout<<"4:Divide"<<endl;
    cout<<"5:Exit"<<endl;
    cout<<"Enter Your Choice"<<endl;
}
float add(float a,float b)
{
    return a+b;
}
float subtract(float a,float b)
{
    return a-b;
}
float multiply(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    return a/b;
}
