#include<iostream>
#include<conio.h>
using namespace std;


///Class Declaration

class Calc
{
private:                            ///Private Data Member Declaration
    int Num1,Num2;

    void Addition()                  ///Private Member Function Declaration and Definition
    {
    cout<<"\n Inside Private Addition Member Function";
    getch();

    Sum=Num1+Num2;
   }



    void Substraction()               ///Private Member Function Declaration and Definition
    {
    cout<<"\n Inside Private Subtraction Member Function";

    Sub=Num1-Num2;
    getch();
    }


public:
    int Sum,Sub;                       ///Public Data Member Declaration and Definition


    Calc()                              ///Default Constructor Declaration and Definition
    {

    Num1=Num2=Sum=Sub=0;
    cout<<"\n Inside Default Constructor \n"<<"Sum :"<<Sum;
    getch();
    }



    Calc(int No1,int No2)          ///Parametrized Constructor Declaration and Definition
    {


    Num1=No1;
    Num2=No2;

    Sum=0;
    Sub=0;

    cout<<"\n Inside Parametrized Constructor"<<"Sum :"<<Sum;

    getch();
   }


    Calc(Calc&Ref)                 ///Copy Constructor Declaration and Definition
    {
    this->Num1=Ref.Num1;
    this->Num2=Ref.Num2;

    this->Sum=0;
    this->Sub=0;
    }


    ~Calc()                        ///Destructor Declaration and Definition
    {
    cout<<"\n Inside Destructor"<<"Sum :"<<Sum;
    getch();
    }



    void Set_Value()               ///Public Member Function Declaration and Definition
    {
    cout<<"\n Inside Public Set_Value Member Function";
    cout<<"\n Enter Two Number";
    cin>>Num1>>Num2;

    getch();
    }


    void Calculation()             ///Public Member Function Declaration and Definition
  {
    cout<<"\n Inside Public Calculation Member Function";
    getch();

    Addition();
    Substraction();
  }


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




