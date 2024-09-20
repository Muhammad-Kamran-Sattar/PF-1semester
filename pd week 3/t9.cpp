#include<iostream>
using namespace std;
main()
{
 cout<<"Enter a 4-digit number:";
 int num;
 cin>>num;
 int sum=0;
 sum+=num%10;
 num=num/10;
 sum+=num%10;
 num=num/10;
 sum+=num%10;
 num=num/10;
 sum+=num%10;
 cout<< "Sum of individual digits :"<<sum;
} 