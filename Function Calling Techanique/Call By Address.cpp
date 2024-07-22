#include<iostream>
#include<conio.h>

using namespace std;

void Address(int*);

 int main()
 {
     int No=10;
     cout<<No<<endl;

     Address(&No);

     cout<<No<<endl;

     getch();
     return 0;
 }
 void Address(int *P)
 {
     cout<<"Inside Function"<<endl;
     (*P)++;
 }

