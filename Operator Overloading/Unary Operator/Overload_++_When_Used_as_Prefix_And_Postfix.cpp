#include<iostream>
using namespace std;

class Count
{
private:
    int value;
public:
    Count():value(5){}

     void operator++()
    {
        ++value;
    }


    void operator++(int)
    {
        value++;
    }
};
int main()
{
    Count count1;
    count1++;

    count1.display();

    ++count1;
    count1.display();

    return 0;
}
