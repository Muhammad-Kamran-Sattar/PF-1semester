#include<iostream>
using namespace std;
void numbers(int ,int );
main()
{
int num1,num2;
cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
numbers(num1,num2);


}






void numbers(int number1,int number2)
{

if(number1==number2)
{
cout<<"True";
} 
if(number1!=number2)
{
cout<<"False";
} 

}