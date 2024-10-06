#include<iostream>
int checking(int );
int condition(int );
using namespace std;
main()
{
 int number;
 cout<<"Enter a five digit number:";
 cin>>number; 
 int result=checking(number);
 int l=condition(result);
 
}
int checking(int digit)
{
 int a=digit%10;
 digit=digit/10;
 int b=digit%10;
 digit=digit/10;
 int c=digit%10;
 digit=digit/10;
  int d=digit%10;
 digit=digit/10;
 int e=digit%10;
 int number=a+b+c+d+e;
 int result=number%2;
}
int condition(int a)
{
 int result=checking(a);
 if(result==0)
 {
    cout<<"The number is evenish";
 }
  if(result!=0)
 {
    cout<<"The number is oddish";
 }

}