#include<iostream>
using namespace std;
int main()
{
    int i=25;

    if(i >= 0 && i <= 10)
        cout<<" i is between 0 and 10"<<endl;

    else if(i >= 11 && i <= 15)
        cout<<" i is between 11 and 15"<<endl;

     else   if(i >= 16 && i <= 20)
        cout<<" i is between 16 and 20"<<endl;

        else
            cout<<" i is greater than 20" << endl;
}
