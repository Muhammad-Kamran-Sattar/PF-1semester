#include <iostream>
void add(int ,int );
using namespace std;
main()
{
int num1,num2;
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
add(num1,num2);
}

void add(int number1,int number2)
{
    cout<<"Sum is :"<<number1+number2;
}