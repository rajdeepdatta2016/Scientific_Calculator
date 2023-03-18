#include<iostream>
#include<math.h>
using namespace std;
class Add
{
    long double a,b,c;
    public:
    void getAdd()
    {
        cout<<"\n\nEnter 1st No: ";
        cin>>a;
        cout<<"\nEnter 2nd No: ";
        cin>>b;
    }
    void showAdd()
    {
        c=a+b;
        cout<<"\nAnswer = "<<c;
    }
};
class Sub
{
    long double a,b,c;
    public:
    void getSub()
    {
        cout<<"\n\nEnter 1st No: ";
        cin>>a;
        cout<<"\nEnter 2nd No: ";
        cin>>b;
    }
    void showSub()
    {
        c=a-b;
        cout<<"\nAnswer = "<<c;
    }
};
class Mul
{
    long double a,b,c;
    public:
    void getMul()
    {
        cout<<"\n\nEnter 1st No: ";
        cin>>a;
        cout<<"\nEnter 2nd No: ";
        cin>>b;
    }
    void showMul()
    {
        c=a*b;
        cout<<"\nAnswer = "<<c;
    }
};
class Div
{
    long double a,b,c;
    public:
    void getDiv()
    {
        cout<<"\n\nEnter 1st No: ";
        cin>>a;
        cout<<"\nEnter 2nd No: ";
        cin>>b;
    }
    int showDiv()
    {
        if(b == 0)
        {
            cout<<"Error: Undefined...";
            return 0;
        }
        c=a/b;
        cout<<"\nAnswer = "<<c;
        return 0;
    }
};
class Power
{
    long double a,b,c,i;
    public:
    void getPow()
    {
        c=1;
        cout<<"\n\nEnter a No: ";
        cin>>a;
        cout<<"\nEnter Its Power: ";
        cin>>b;
    }
    void showPow()
    {
        for(i=1 ; i<=b ; i++)
        {
            c=c*a;
        }
        cout<<"\nAnswer = "<<c;
    }
};
class Factorial
{
    long double b,f,i;
    int a;
    public:
    void getFact()
    {
        f=1;
        cout<<"\n\nEnter a No: ";
        cin>>b;
        a=b;
    }
    int showFact()
    {
        if(a != b)
        {
            cout<<"Error: Non Integer Input";
            return 0;
        }
        for(i=1; i<=a; i++)
        {
            f = f*i;
        }
        cout<<"\nAnswer = "<<f;
        return 0;
    }
};
class Square
{
    long double a,b;
    public:
    void getSQ()
    {
        cout<<"\n\nEnter a No: ";
        cin>>a;
    }
    void showSQ()
    {
        b=a*a;
        cout<<"\nAnswer = "<<b;
    }
};
class Cube
{
    long double a,b;
    public:
    void getCB()
    {
        cout<<"\n\nEnter a No: ";
        cin>>a;
    }
    void showCB()
    {
        b=a*a*a;
        cout<<"\nAnswer = "<<b;
    }
};
class SQRTT
{
    long double a,b;
    public:
    void getRT()
    {
        cout<<"\n\nEnter a No: ";
        cin>>a;
    }
    void showRT()
    {
        b=sqrt(a);
        cout<<"\nAnswer = "<<b;
    }
};
int main()
{
    cout<<"\t\t\t Welcome to Scientific Calculator App!!";
    int oper,iloop;
    for(iloop=0; iloop<10;iloop--)
    {
        cout<<"\n\n************ Press 0 to Quit the Program ************";
        cout<<"\nEnter 1 for Addition";
        cout<<"\nEnter 2 for Substraction";
        cout<<"\nEnter 3 for Multiplication";
        cout<<"\nEnter 4 for Division";
        cout<<"\nEnter 5 for Power";
        cout<<"\nEnter 6 for Factorial";
        cout<<"\nEnter 7 for Square";
        cout<<"\nEnter 8 for Cube";
        cout<<"\nEnter 9 for Square Root";
        cout<<"\n\nEnter The Operation You want to do: ";
        cin>>oper;
        switch(oper)
        {
            case 0: {
                cout<<"\n\n\t\tThank You";
                return 0;
            }
            case 1: {
                    Add o1;
                    o1.getAdd();
                    o1.showAdd();
                    break;
            }
            case 2: {
                    Sub o2;
                    o2.getSub();
                    o2.showSub();
                    break;
            }
            case 3: {
                    Mul o3;
                    o3.getMul();
                    o3.showMul();
                    break;
            }
            case 4:{
                    Div o4;
                    o4.getDiv();
                    o4.showDiv();
                    break;
            }
            case 5:{
                    Power o5;
                    o5.getPow();
                    o5.showPow();
                    break;
            }
            case 6:{
                Factorial o6;
                o6.getFact();
                o6.showFact();
                break;
            }
            case 7:{
                Square o7;
                o7.getSQ();
                o7.showSQ();
                break;
            }
            case 8:{
                Cube o8;
                o8.getCB();
                o8.showCB();
                break;
            }
            case 9:{
                SQRTT o9;
                o9.getRT();
                o9.showRT();
                break;
            }
            default:{
                cout<<"\n\t\tError Case Input....\nPlease Choose the correct options.\n";
            }
        }
    }
}