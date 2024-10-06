#include<iostream>
using namespace std;
#include <string>
string time(int t,int  t2);
pair<int, int> timetravel(int hours,int minutes );
main()
{
 cout<<"Enter Hours :";
 int hours;
 cin>>hours;
 cout<<"Enter minutes :";
 int minutes;
 cin>>minutes;
 pair<int, int> newTime = timetravel(hours, minutes); 
 string result = time(newTime.first, newTime.second);
 cout<<result;
 
}
pair<int, int> timetravel(int hours,int minutes )
{
    int t;
    t=minutes+15;
    if(t>59)
    {
        t=t-60;
       int t2;
       t2=hours+1; 
        return make_pair(t2, t);
    }
    if(t<=59)
    {
   return make_pair(hours, t);
    }
    
    
    
}
string time(int t2,int  t)
{  timetravel(t2,t );
   return to_string(t2) + ":" + to_string(t); 
}