#include<iostream>
using namespace std;
class A
{
   public:
       int n1,n2;
       void getdata()
       {
           cout<<"Enter value of n1,n2:\n";
           cin>>n1>>n2;
       }

};
class B:public A
{
public:
    void product()
    {
        cout<<"\nProduct="<<n1*n2<<endl;
    }
};
class C:public A
{
public:
    void sum()
    {
        cout<<"\nSum="<<n1+n2<<endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();

    return 0;

}
