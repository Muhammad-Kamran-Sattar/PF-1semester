#include <iostream>
using namespace std;
main()
{
  cout<<"Enter the fertilizer bag in pounds: ";
  float pound;
  cin>>pound;
  cout<<"Enter the cost of the bag: ";
  float bag;
  cin>>bag;
  cout<<"Enter the area in square feet that can be covered by the bag: ";
  float ba_g;
  cin>>ba_g;
  float cost;
  cost=bag/pound;
 cout<<"Cost of fertilizer per pound:"<<cost<<endl;
  float cost2;  
  cost2=ba_g*bag;
 cout<<"Cost of fertilizing per square foot:"<<cost2;
}
  
 

   