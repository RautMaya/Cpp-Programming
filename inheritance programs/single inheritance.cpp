#include<iostream>
using namespace std;

class A
{
public:
    void function()
    {
        cout<<"Inherited";
    }
};
class B:public A
{

};
int main()
{
    B b;
    b.function();
}
