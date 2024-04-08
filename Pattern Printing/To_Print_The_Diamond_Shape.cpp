#include<iostream>
using namespace std;
void printDiamond(int n)
{
    int space=n-1,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
            cout<< " ";
        for(j=0;j<=1;j++)
            cout<< "* ";
        cout<<endl;
        space--;
    }
    space=0;
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<space;j++)
            cout<< " ";
        for(j=0;j<i;j++)
            cout<<" *";
        cout<<endl;
        space++;
    }
}
int main()
{
    printDiamond(5);
    return 0;
}
