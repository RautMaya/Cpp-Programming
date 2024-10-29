#include<iostream>
using namespace std;
class construct
{
public:
    int x,y;
    construct()
    {
        x=10;
        y=20;
    }
};
int main()
{
  construct z;
  cout<<"x:"<<z.x<<endl;
  cout<<"y:"<<z.y<<endl;
  return 0;
}
