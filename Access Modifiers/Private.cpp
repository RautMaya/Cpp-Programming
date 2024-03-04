#include<iostream>
using namespace std;
class circle
{
private:
    double radius;
    public:
    void compute_area(double r)
    {
        radius=r;
        double area= 3.14*radius*radius;
        cout<<"Radius is:"<<radius<<endl;
    cout<<"Area is:"<<area;
    }
};
int main()
{
    circle Obj;
    Obj.compute_area(1.5);

    return 0;
}
