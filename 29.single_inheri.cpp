#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    int rl;
    char nm[20];
    public:
    void read();
    void display();
};
class marks : public student
{
        int t;
        float p;
        char div[10];
    protected:
        int s1;
        int s2;
        int s3;
    public:
        void getmarks();
        void putmarks();
        void process();
        void printresult();
};
void student :: read()
{
    cout<<"enter roll no :";
    cin>>rl;
    cout<<"enter name :";
    cin>>nm;
}
void student ::display()
{
    cout<<"Roll no :"<<rl<<endl;
    cout<<"name :"<<nm<<endl;
    cout<<"\n";
}
void marks :: getmarks()
{
    cout<<"enter marks for 3 subjects:"<<endl;
    cin>>s1>>s2>>s3;
}
void marks ::putmarks()
{
    cout<<"subject 1:"<<s1<<endl;
    cout<<"subject 2:"<<s2<<endl;
    cout<<"subject 3:"<<s3<<endl;
}
void marks ::process()
{
    t = s1+s2+s3;
    p = t/3.0;
    p>=60?strcpy(div,"first"):p>=50?strcpy(div,"second"):strcpy(div,"Third");
}
void marks ::printresult()
{
    cout<<"total ="<< t <<endl;
    cout<<"\n";
    cout<<"persentage ="<< p <<endl;
    cout<<"divison ="<< div <<endl;
}
int main()
{
    marks x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;
}