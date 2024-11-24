#include<iostream>
using namespace std;
main()
{
    /* input from user the movie name */
    string name;
    cout<<"Enter the movie name:";
    cin>>name;
    /* array of five movies */
    string moviename[5]={"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    /*price calculate */
    int price=500,discount=0;
    
    for (int idx=0;idx<5;idx++)
    { 
    if(moviename[idx]==name)/*check in array*/
    {
     if(idx%2==0) /*for even index*/
     {
       discount=price*0.1;
     }
     else/*for odd index */
     {
        discount=price*0.05;
     }
    }

    }
    price=price-discount;
    cout<<"Total price:"<<price;    
}