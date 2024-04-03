#include<iostream>
using namespace std;
int main()
{
    int rows=1,columns=0,n=5;
    int number=1;
    while(rows<=n)
    {
        while(columns<=rows-1)
        {
            cout<<number<<" ";
            columns++;
            number++;
        }
        columns=0;
        rows++;
        cout<<endl;


    }

    return 0;
}
