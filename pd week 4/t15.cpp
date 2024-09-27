#include<iostream>
using namespace std;
void flowerShop(float, float, float );
main()
{

float red_rose=0,white_rose=0,t_ulip=0;
cout<<"Enter the redrose:"<<red_rose;
cin>>red_rose;
cout<<"Enter the whiterose:"<<white_rose;
cin>>white_rose;
cout<<"Enter the tulip:"<<t_ulip;
cin>>t_ulip;
flowerShop(red_rose,white_rose,t_ulip);

}





void flowerShop(float redRose, float whiteRose, float tulip)
{
float totalprice=0,price=0;
price=(redRose*2)+(whiteRose*4.10)+(tulip*2.50);
if(price>200)
{

cout<<"Total price:"<<price<<endl;
totalprice=price-(price*0.2);
cout<<"Price after Discount:"<<totalprice<<endl;
} 

}