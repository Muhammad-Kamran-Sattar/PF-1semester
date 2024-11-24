#include <iostream>
using namespace std;
main()
{
int runs;    
cout<<"Enter the number of miles";
cin>>runs;
int run[runs];
for(int idx=0;idx<runs;idx++)
{
    cin>>run[idx];
}
int count=0;
for(int idx=0;idx<runs;idx++)
{   
    if(run[idx+1]>run[idx])
    {
        count++;  
    }
}
cout<<"Progress  is "<<count<<" times";
}
