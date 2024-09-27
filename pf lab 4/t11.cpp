#include <iostream>
using namespace std;
void oil(float x);
main()
{

 cout<<"Enter distance:";
 float dis; 
 cin>>dis;

 if(dis<=100)
 {
 cout<<"Fuel is : 100";
  }
if(dis>100)
{
  oil(dis);
}
 
}



void oil(float x)
{
 float fuel;
 fuel=x*10;
 cout<<"Fuel is:"<<fuel; 
}
