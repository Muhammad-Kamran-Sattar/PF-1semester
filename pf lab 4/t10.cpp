#include <iostream>
using namespace std;
void even();
void odd();
main()
{
 cout<<"Enter a number:";
 int n;
 cin>>n;
 int x;
 x= n%2; 
 if(x==0)
 {
  even();
  }
 if(x!=0)
 {
  odd();
  }
 
}



void even()
{
 cout<<"Even"; 
}
void odd()
{
 cout<<"Odd"; 
}