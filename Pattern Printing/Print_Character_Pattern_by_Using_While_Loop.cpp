#include<iostream>
using namespace std;
int main()
{
    int i=1,j=0;
    int rows=5;
    char character='A';

    while(i<=rows)
    {
       while(j<=i-1)
        {


            cout<<character<< " ";
            j++;
    }
    cout<<"\n";
    character++;
    j=0;
    i++;
    }
    return 0;
}

