#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
public:
      float Radius,Area,Circum,PI,R;  ///Data Member

      Circle()
      {

          Radius=0.0;
          Area=0.0;
          Circum=0.0;
          PI=3.14;

        cout<<"\n Inside Class :: DEFAULT CONSTRUCTOR";

      }

      Circle(float R)
      {

          Radius=R;
          Area=0.0;
          Circum=0.0;
          PI=3.14;

           cout<<"\n Inside Class :: PARAMETERIZED CONSTRUCTOR",Radius;
      }

     void Area_Of_Circle()
     {
         Area=PI*Radius*Radius;
     }
     void Circumference_Of_Circle()
     {
         Circum=2*PI*Radius;
     }

     ~Circle()
     {
         cout<<"\n Inside Class :: DECONSTRUCTOR";
     }



};
int main()
{
    float R=0.0,Radius,Area,Circum;
    Circle Obj1();
    Circle Obj2(5.5);

    cout<<"\n Enter Radius Of 1st Circle :";
    cin>>R;

    Obj1.Area_Of_Circle();
    Obj1.Circumference_Of_Circle();

    Obj2.Area_Of_Circle();
    Obj2.Circumference_Of_Circle();

    cout<<"\n Detail Of  Circle =>"<<endl;

    cout<<"\n Radius Of Circle       ="<<Radius;
    cout<<"\n Area Of Circle         ="<<Area;
    cout<<"\n Circumference Of Circle ="<<Circum;

    cout<<"\n Detail Of  Circle =>"<<endl;

    cout<<"\n Radius Of Circle       ="<<Radius;
    cout<<"\n Area Of Circle         ="<<Area;
    cout<<"\n Circumference Of Circle ="<<Circum;

    return 0;


}
