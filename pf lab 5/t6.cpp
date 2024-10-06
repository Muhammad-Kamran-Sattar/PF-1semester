#include <iostream>
#include <cmath>
using namespace std;
main()
{
float num1,num2,hyp,perpendicular;
cout<<"Enter the horizontal distance  : ";
cin>>num1;
cout<<"Enter the angle of elevation : ";
cin>>num2;
hyp=num1/cos(num2);
perpendicular=sqrt((hyp*hyp)-(num1*num1));
cout<<"The height of the tree is :"<<perpendicular;
}