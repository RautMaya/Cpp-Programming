#include<iostream>
using namespace std;
class Count
{
    int x,X;
public:
    Count(int x=0)
    {
        this -> x=X;
    }
    Count operator++()
    {
        Count c;
        c.x=++x;
        return c;
    }
    void print()
    {
        cout<<x<<endl;
    }
};
int main()
{
    Count c1(42);

    cout<<"Before using ++ operator:";
    c1.print();
    Count c2=++c1;
    cout<<"After using ++ operator:";
    c2.print();
}
