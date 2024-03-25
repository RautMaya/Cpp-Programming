#include<iostream>
using namespace std;
int findSum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
        sum=sum+i;
    return sum;
}
int main()
{
    int n=5;
    cout<<findSum(n);
    return 0;
}
