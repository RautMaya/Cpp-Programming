#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10,temp;

    cout<<"Before Swapping."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;

   a=a+b;
   a=a-b;
   b=a-b;

    cout<<"After Swapping."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}

