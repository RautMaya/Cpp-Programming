#include<iostream>
using namespace std;
int main()
{
    int n=7,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
            cout<< " ";
        for(j=1;j<=n-i+1;j++)
            cout<< "*";
        cout<<endl;
    }
    return 0;
}


