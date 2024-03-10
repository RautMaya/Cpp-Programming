#include<iostream>
using namespace std;
class Shape
{

protected:
    float dimension;

public:
    void getDimension()
    {
        cin>>dimension;

    }
    virtual float calculateArea()=0;
};
class Circle:public Shape
{
public:
    float calculateArea()
    {
        return 3.14*dimension*dimension;
    }
};

int main()
{
    Square square;
    Circle circle;

    cout<<"Enter the length of the square:";
    square.getDimension();
    cout<<"Area of square:"<<square.calculateArea()<<endl;

    cout<<"Enter the radius of the circle:";
    circle.getDimension();
    cout<<"Area of circle:"<<circle.calculateArea()<<endl;

    return 0;


}
