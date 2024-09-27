#include <iostream>
using namespace std;
void vote(int);
main()
{
 cout<<"Enter your age:";
 int age;
 cin>>age;
 vote(age);
}



 void vote(int x)
{
 if(x>=18)
{
 cout<<"You are elligible to vote. ";
}
}