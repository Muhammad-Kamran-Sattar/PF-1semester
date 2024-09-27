#include<iostream>
using namespace std;
void discount(string,float,float);
main()
{
while(true)
{
string nam;
cout<<"Enter the country name :";
cin>>nam;
float price1,totalprice;
cout<<"Enter the ticket price :";
cin>>price1;
discount(nam,price1,totalprice);
}
}






void discount(string name,float price,float fprice)
{

if(name=="Pakistan")
{
fprice=price-(price*0.05);
cout<<"The ticket price after discount is :"<<fprice<<endl;
} 
if(name=="Ireland")
{
fprice=price-(price*0.1);
cout<<"The ticket price after discount is :"<<fprice<<endl;
} 
if(name=="India")
{
fprice=price-(price*0.2);
cout<<"The ticket price after discount is :"<<fprice<<endl;
} 
if(name=="England")
{
fprice=price-(price*0.30);
cout<<"The ticket price after discount is :"<<fprice<<endl;
}
 if(name=="Canda")
{
fprice=price-(price*0.45);
cout<<"The ticket price after discount is :"<<fprice<<endl;
}
}