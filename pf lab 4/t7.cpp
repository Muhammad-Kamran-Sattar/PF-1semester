#include <iostream>
using namespace std;
void div(float,float);
void mul(float,float);
void sub(float,float);
void add(float,float);
main()
{
 cout<<"Enter number a:";
 float a;
 cin>>a;
 cout<<"Enter number b:";
 float b;
 cin>>b;
 cout<<"Enter operators (+-*/):";
 char op;
 cin>>op;
 if(op=='+')
 {
  add(a,b);
  }
 if(op=='-')
 {
  sub(a,b);
  }
 if(op=='*')
 {
  mul(a,b);
  }
 if(op=='/')
 {
  div(a,b);
  }
}




 void add(float x, float y)
{ 
  cout<<"Sum is:"<<x+y;
}
void sub(float x, float y)
{
  cout<<"Sub is:"<<x-y;
}
void mul(float x, float y)
{
  cout<<"Mul is:"<<x*y;
}
void div(float x, float y)
{
  cout<<"Div is:"<<x/y;
}