#include<iostream>
using namespace std;

class Count
{
private:
    int value;
public:
    Count():value(5)
    {
        ++value;
    }

    void display()
    {
        cout<<"Count:<<value<<end l";
    }
};
int main()
{
    Count count1;

    count1.display();
    return 0;
}
