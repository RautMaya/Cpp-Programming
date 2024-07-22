#include<iostream>
#include<conio.h>

using namespace std;

void Reference(int&);

int main()
{
    int No=10;
    cout<<No<<endl;

    Reference(No);

    cout<<No<<endl;

    getch();
    return 0;
}
void Reference(int&Ref)
{
    cout<<"\n Inside Function...."<<endl;
    Ref++;
}
