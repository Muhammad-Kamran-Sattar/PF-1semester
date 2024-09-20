#include <iostream>
using namespace std;
main()
{
  cout<<"enter imposter count: ";
  float count;
  cin>>count;
  cout<<"enter player count: ";
  float pcount;
  cin>>pcount;
 int chance=100*(count/pcount);
  
  cout<<"chance of imposter "<<chance <<"%";

}
   