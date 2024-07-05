#include<iostream>
using namespace std;
int main()
{
    int a=10,b=15,temp;

    cout<<"Before Swapping."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"After Swapping."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}

