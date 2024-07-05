#include<iostream>
using namespace std;
int main()
{
    int a=11,b=55,temp;

    cout<<"Before Swapping."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;

   a=a+b;
   a=a-b;
   b=a-b;

    cout<<"After Swapping."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}

