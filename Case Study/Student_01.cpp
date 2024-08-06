#include<iostream>
#include<conio.h>
using namespace std;;

class Student
{
public:
    int RollNo;
    char Name[20];
    char Class[20];

    Student();
    Student(int ,char );

    Student(Student &Stud);

    void Accepct_Information();
    void Display_Information();

        ~Student()
   {
    cout<<"\n All Student Information Successfully Entered"<<"\n"<<RollNo<<endl;
    }
};

///Methods

Student :: Student()
{
    RollNo=111;
    cout<<"\n Default :: Constructor"<<"\n"<<RollNo<<endl;
}



Student :: Student(int,char)
{
    RollNo=222;
     cout<<"\n Parameterized:: Constructor"<<"\n"<<RollNo<<endl;
}
Student :: Student(Student &Stud)
{
    RollNo=333;
    cout<<"\n Constructor :: copy "<<"\n"<<RollNo<<endl;
    Stud.RollNo;
    Stud.Name;
    Stud.Class;

}



void Student::Accepct_Information()
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
void Student::Display_Information()
{
    cout<<"\n-----Student Information is---------"<<endl;
    cout<<"\n  Student Roll No :"<<RollNo<<endl;
    cout<<"\n  Student Name :"<<Name<<endl;
    cout<<"\n  Student Class :"<<Class<<endl;
}


///Main

int main()
{
    int RollNo,Name,Class;

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




