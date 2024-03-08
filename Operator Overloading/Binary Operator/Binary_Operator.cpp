#include<iostream>
using namespace std;

class Airth_num
{
    int x,y,Ax;
public:
    void input()
    {
        cout<<"Enter the First number:";
        cin>>x;

    }
    void input2()
    {
        cout<<"Enter the Second number:";
        cin>>y;

    }
    Airth_num operator +(Airth_num &ob)
    {
        Airth_num A;
        Ax=x+ob.x;
        return(A);
    }
    void print()
    {
        cout<<"The Sum of two numbers is:"<<x;
    }
};
int main()
{
    Airth_num x1,y1,res;
    x1.input();
    y1.input();
    res=x1+y1;

    res.print();
    return 0;
}
