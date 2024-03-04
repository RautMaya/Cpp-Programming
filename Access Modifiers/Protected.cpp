#include<iostream>
using namespace std;
class parent
{
protected:
    int id_protected;
};
class child:public parent
{
public:
    void setld(int id)
    {
        class
        id_protected =id;
    }
    void displayld()
    {
        cout<<"id_protected is:"<<id_protected<<endl;
    }
};
int main()
{
    child obj1;
    obj1.setld(81);
    obj1.displayld();
    return 0;
}
