#include<iostream>
#include<conio.h>
using namespace std;


///Class Declaration

class Calc
{
private:                            ///Private Data Member Declaration
    int Num1,Num2;

    void Addition();                   ///Private Member Function Declaration

    void Substraction();               ///Private Member Function Declaration

public:
    int Sum,Sub;                       ///Public Data Member Declaration


    Calc();                          ///Default Constructor Declaration

    Calc(int No1,int No2);           ///Parametrized Constructor Declaration
    Calc(Calc&Ref);                  ///Copy Constructor Declaration

    ~Calc();                          ///Destructor Declaration



    void Set_Value();                 ///Public Member Function Declaration

    void Calculation();               ///Public Member Function Declaration
};

int main()
{
    Calc Obj1;


    Obj1.Set_Value();
    Obj1.Calculation();

    cout<<"Addition of Obj1 :"<<Obj1.Sum<<endl;
    cout<<"Subtraction of Obj1 :"<<Obj1.Sub<<endl;


    getch();

    Calc Obj2(15,15);

    Obj2.Calculation();

    cout<<"Addition of Obj1 :"<<"Sum :"<<Obj2.Sum<<endl;
    cout<<"Subtraction of Obj1 :"<<"Sub :"<<Obj2.Sub<<endl;

    Calc Obj3(Obj2);

    cout<<"Addition of Obj1 :"<<"Sum :"<<Obj2.Sum<<endl;
    cout<<"Subtraction of Obj1 :"<<"Sub :"<<Obj2.Sub<<endl;

    getch();




    Obj3.Set_Value();
    Obj3.Calculation();

    cout<<"Addition of Obj3 :"<<Obj3.Sum<<endl;
    cout<<"Subtraction of Obj3 :"<<Obj3.Sub<<endl;


    cout<<"Thanks \n Back To main";

    getch();

    return 0;
}


Calc :: Calc()                           ///Default Constructor Definition
{

    Num1=Num2=Sum=Sub=0;
    cout<<"\n Inside Default Constructor \n"<<"Sum :"<<Sum;
    getch();
}

Calc :: Calc(int No1,int No2)            ///Parametrized Constructor Definition
{


    Num1=No1;
    Num2=No2;

    Sum=0;
    Sub=0;

    cout<<"\n Inside Parametrized Constructor"<<"Sum :"<<Sum;

    getch();
}
Calc :: ~Calc()                             ///Destructor Definition
{
    cout<<"\n Inside Destructor"<<"Sum :"<<Sum;
    getch();
}

Calc :: Calc(Calc&Ref)                   ///Copy Constructor
{
    this->Num1=Ref.Num1;
    this->Num2=Ref.Num2;

    this->Sum=0;
    this->Sub=0;
}

void Calc :: Set_Value()                   ///Public Member Function Declaration
{
    cout<<"\n Inside Public Set_Value Member Function";
    cout<<"\n Enter Two Number";
    cin>>Num1>>Num2;

    getch();
}

void Calc :: Calculation()                  ///Public Member Function Declaration
{
    cout<<"\n Inside Public Calculation Member Function";
    getch();

    Addition();
    Substraction();
}
void Calc :: Addition()                     ///Private Member Function Declaration
{
    cout<<"\n Inside Private Addition Member Function";
    getch();

    Sum=Num1+Num2;
}
void Calc :: Substraction()                     ///Private Member Function Declaration
{
    cout<<"\n Inside Private Subtraction Member Function";

    Sub=Num1-Num2;
    getch();
}

