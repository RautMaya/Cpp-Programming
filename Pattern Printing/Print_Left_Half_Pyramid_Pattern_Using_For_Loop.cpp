#include<iostream>
using namespace std;
int main()
{
    int rows=5,i,j;
    for(i=rows;i>0;i--)
    {
        for( j=0;j<=rows;j++)
        {
            if(j>=i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
