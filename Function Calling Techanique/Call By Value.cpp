#include<iostream>
#include<conio.h>

using namespace std;

void value(int);

int main()
{
    int No=10;
    cout<<No<<endl;

    value(No);
    cout<<No<<endl;

    getch();
    return 0;
}
void value (int num)
{
    cout<<"\n Inside the Function :"<<endl;

    num++;
}
