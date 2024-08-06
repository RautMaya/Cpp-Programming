#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Student
{
public :
    int RollNo;
    char Name[20];         ///Data Member
    char Class[10];

    Student()
    {
          RollNo=111;
        cout<<"\n Default :: Constructor"<<"\n"<<RollNo<<endl;
                                     /// ----------------------------- ///Default Constructor
    }

    void Accepct_Information()
    {
        cout<<"\n Enter Student Roll No :";
        cin>>RollNo;
        getch();
        cout<<"\n Enter Student Name :";
        cin>>Name;
       getch();
        cout<<"\n Enter Student Class :";
        cin>>Class;
    }

    void Display_Information()
    {
        cout<<"\n----------- Student Details------------\n";
        cout<<"\n Enter Student Roll No :"<<RollNo<<endl;
        cout<<"\n Enter Student Name :"<<Name<<endl;
         cout<<"\n Enter Student Class :"<<Class<<endl;
    }

    Student(int i,char c)
    {
        RollNo=i=222;


        cout<<"\n Parameterized :: Constructor"<<"\n"<<RollNo<<endl;

    }

    Student(Student &Stud)
    {
        RollNo=333;
        cout<<"\n Copy :: Constructor"<<"\n"<<RollNo<<endl;
        Stud.RollNo;
        Stud.Name;
        Stud.Class;
    }
    ~Student()
    {
        cout<<"\n Successfully Display Student Information"<<"\n"<<RollNo<<endl;
    }

};
int main()
{
    int RollNo=0,Name,Class;

    Student S;
    Student S1(RollNo,Name);
    Student S2(S1);

    S.Accepct_Information();
    S.Display_Information();

     S1.Accepct_Information();
    S1.Display_Information();

    S2.Accepct_Information();
    S2.Display_Information();


    getch();
    return 0;

}
