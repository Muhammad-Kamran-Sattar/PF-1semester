#include <iostream>
using namespace std;
void add();
main()
{
add();
add();
}

void add()
{
 int num1,num2,sum;
 cout<<"Enter number 1:";
 cin>>num1;
 cout<<"Enter number 2:";
 cin>>num2;
 sum=num1+num2;
 cout<<"Sum is "<<sum<<endl;
}