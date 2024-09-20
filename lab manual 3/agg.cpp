#include<iostream>
using namespace std;
main()
{
 cout<<"enter students name:";
 string name;
 cin>> name;
 cout<<"enter matric marks (out of 1100):";
 float m;
 cin>> m;
 cout<<"enter inter marks (out of 1100):";
 float i;
 cin>> i;
 cout<<"enter ecats marks (out of 400):";
 float e;
 cin>> e;
 float agg = m/1100*10 +i/1100*50+e/400*40; 
 cout<<"aggregate is:"<<agg;
  
}