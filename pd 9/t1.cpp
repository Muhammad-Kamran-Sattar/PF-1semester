#include<iostream>
using namespace std;
main()
{
    int quantity,prices;
    string fruits;
    cout<<"Fruit name:";
    cin>>fruits;
    cout<<"Enter the quantity:";
    cin>>quantity;
string fruit[4]={"peach","apple","guava","watermelon"};
int price[4]={60,70,40,30};
for(int idx=0;idx<4;idx++)
{
    if(fruits==fruit[idx])
    {
     prices=quantity*price[idx];
    }

}
cout<<"Total price:"<<prices;
}
