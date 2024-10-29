#include<iostream>
using namespace std;

class sample
{
    int id;
public:
    void init (int a)
    {
        id =a;
    }
    void display()
    {
        cout<<endl<<"ID="<<id;
    }
};
int main()
{
    sample obj1;
    obj1.init(50);
    obj1.display();
    sample obj2(obj1);
    obj2.display();
    return 0;
}
