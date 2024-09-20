#include<iostream>
using namespace std;
main()
{
 cout<<"Enter vegetable  price per kilogram (in coins):";
 float veg_price;
 cin>>veg_price;
 cout<<"Enter fruits  price per kilogram (in coins):";
 float fru_price;
 cin>>fru_price;
 cout<<"Enter total kilograms of vegetables:";
 int weightv;
 cin>>weightv;
 cout<<"Enter total kilograms of fruits:";
 int weightf;
 cin>>weightf;
 float total;
 total=(veg_price/1.94)*weightv+(fru_price/1.94)*weightf;
 cout<<"Total earnig in Rupees (Rps): "<<total; 
}
 
 