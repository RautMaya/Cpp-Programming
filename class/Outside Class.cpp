#include<iostream>
using namespace std;
class myclass
{
public:
    void myMethod();
};
void myclass::myMethod()
{
    cout<<"The program executed";
}
int main()
{
    myclass myObj;
    myObj.myMethod();
    return 0;
}
