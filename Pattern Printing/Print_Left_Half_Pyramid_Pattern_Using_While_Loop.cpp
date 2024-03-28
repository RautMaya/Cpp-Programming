#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,sp=0;
    int rows=5;
    while(i<rows)
    {
        while(sp<(rows-i-1))
        {
            cout<<" ";
            sp++;
        }
        sp=0;

        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        j=0;
        i++;
        cout<<"\n";
    }

    return 0;
}
