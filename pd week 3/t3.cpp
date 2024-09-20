#include <iostream>
using namespace std;
main()
{
  cout<<"enter initial velocity:";
  float velocity;
  cin>>velocity;
  cout<<"enter acceleration:";
  float acceleration;
  cin>>acceleration;
  cout<<"enter time:";
  float time;
  cin>>time;
  float velocityf;
  velocityf=acceleration*time+velocity;
 cout<<"final velocity: "<<velocityf;


}
   