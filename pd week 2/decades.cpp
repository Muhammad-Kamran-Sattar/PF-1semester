#include<iostream>
using namespace std;
main()
{
 cout<<"enter pouplation :";
 int p;
 cin>>p;
 cout<<"enter the birth rate per month :";
 int m;
 cin>> m;
 int y;
 y=360*m+p;
 cout<< "the pouplation in three decades will be :"<<y;  
}