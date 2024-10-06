#include <iostream>
#include <cmath>
using namespace std;
main()
{
float root1,root2;
float  a,b,c,dis;
cout<<"Enter the value of a  : ";
cin>>a;
cout<<"Enter the value of b  : ";
cin>>b;
cout<<"Enter the value of c  : ";
cin>>c;
dis=((b*b)-4*a*c);
if(dis>0)
{

root1=(-b+sqrt((b*b)-4*a*c))/2*a;
root2=(-b-sqrt((b*b)-4*a*c))/2*a;
cout<<"Roots are "<<root1 <<","<< root2;
}
if(dis<0)
{
float realpart,complex;
realpart=(-b/2*a);
complex=sqrt(-((b*b)-(4*a*c)))/2*a;
cout<<"Rosots are "<<realpart<<"-"<<complex<<"i"<<" , "<< realpart<<"+"<<complex<<"i";
}
if(dis==0)
{
root1=root2=-b/2*a;
cout<<"Roots are "<<root1<<" , "<< root2;
}
}