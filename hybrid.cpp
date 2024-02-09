#include<iostream>

using namespace std;
class A
{

protected:
    int  a;
public:
    void get_a()
    {
        std::cout<<"enter value of 'a':";
        cin>>a;
    }
};
class B:public A
{
protected:
    int b;
public:
    void get_b()
    {
        std::cout<<"value of 'b':"<<std::endl;
        cin>>b;
    }
};
class C
{
protected:
    int c;
public:
    void get_c()
    {
        std::cout<<"value of 'c':"<<std::endl;
    }
};
class D:public B,public C
{
protected:
    int d;
public:
    void mul()
    {
        get_a();
        get_b();
        get_c();
        std::cout<<"multiplication of a b c is :"<<a*b*c<<std::endl;

    }
}    ;
int main()
{

    D d;
    d. mul();
    return 0;
}
