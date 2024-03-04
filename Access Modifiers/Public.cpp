#include<iostream>
using namespace std;
class circle
{
public:
    double radius;
    double compute_area()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    circle Obj;
    Obj.radius=5.5;
    cout<<"Radius is:"<<Obj.radius<<"\n";
    cout<<"Area is:"<<Obj.compute_area();
    return 0;
}
