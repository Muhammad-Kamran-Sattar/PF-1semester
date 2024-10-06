#include<iostream>
int symmetrical (int );
int condition(int );
using namespace std;
main()
{
 int number;
 cout<<"Enter a three digit number:";
 cin>>number; 
 int result=symmetrical(number);
 int l=condition(result);
 
}
int symmetrical (int digit)
{
    int a=digit%10;
    digit=digit/10;
    int b=digit%10;
    digit=digit/10;
   int reversed=a*100+b*10+digit;    

    return reversed;
} 
int condition(int a)
{   int result=symmetrical(a);
    if(result==a)
    {
      cout<<"The digit is symmetrical";
    }
      if(result!=a)
    {
       cout<<"The digit is not symmetrical";
    }
}