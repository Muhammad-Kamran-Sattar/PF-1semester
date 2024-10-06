#include <iostream>
float taxCalculator( char type, float price);
using namespace std;
int main()
{
char type; 
float price;
float result;   
cout<<"Enter the vehicle type code";
cin>>type;
cout<<"Enter the price of the vehicle ";
cin>>price;
result =taxCalculator( type, price);
cout<<"The final price of the vehicle of type "<<type<<"including the tax"<<result;
}
float taxCalculator( char type, float price)
{
float result,tax;
if(type=='M')
{
tax=price* (0.06)/100;
result=tax+price;
return result;   
}
if(type=='E')
{
tax=price* (0.08)/100;
result=tax+price;
return result;   
}
if(type=='S')
{
tax=price* (0.10)/100;
result=tax+price;
return result;   
}
if(type=='C')
{
tax=price* (0.12)/100;
result=tax+price;
return result;   
}
if(type=='T')
{
tax=price* (0.15)/100;
result=tax+price;
return result;   
}


}