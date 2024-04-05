#include<iostream>
using namespace std;
int main()
{
    int n=5,i,j;
    for(i=n;i>=1;i--)
    {
        for(j=0;j<=n-i;j++)
            cout<< " ";
        for(j=1;j<=i;j++)
            cout<< "*";
        cout<<endl;
    }
    return 0;
}


