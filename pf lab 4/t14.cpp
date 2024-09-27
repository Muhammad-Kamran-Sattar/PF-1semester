#include <iostream>
using namespace std;
main()
{
 while (true)
{
 float amount;
 cout<<"Enter the purchased amount :"<<endl;
 cin>>amount;
 string name;
 cout<<"Enter the day :";
 cin>>name;
 if (name=="sunday")
{
 float x;
 x=amount-(amount*0.1);

 cout<<"the amount is:"<<x<<endl; 
}
 if (name!="sunday")
{
 float y;
 y=amount-(amount*0.05);
 cout<<"the amount is:"<<y<<endl; 
}
}
}


