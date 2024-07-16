#include<iostream>
#include<Conio.h>
using namespace std;


class Calculator
{
    public:
    int N1,N2,Res;

    Calculator()
    {

    }

    void Add()
    {
        Res=N1+N2;
    }
    void Sub()
    {
        Res=N1-N2;
    }
};
int main()
{
    Calculator Obj1;

    cout<<"\n Enter 1st Number :";
    cin>>Obj1.N1;

    cout<<"\n Enter 2nd Number :";
    cin>>Obj1.N2;

    Obj1.Add();
    cout<<endl<<" Addition Of "<<Obj1.N1<<" & "<<Obj1.N2<<" is = "<<Obj1.Res<<endl;

    cout<<"\n Enter 1st Number :";
    cin>>Obj1.N1;

    cout<<"\n Enter 2nd Number :";
    cin>>Obj1.N2;


    Obj1.Sub();
    cout<<endl<<" Subtraction Of "<<Obj1.N1<<" & "<<Obj1.N2<<" is = "<<Obj1.Res<<endl;

    getch();
    return 0;
}
