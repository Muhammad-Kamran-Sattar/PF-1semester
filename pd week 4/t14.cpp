#include<iostream>
using namespace std;
void time(int ,int ,int );
main()
{

int hrs,hrs1,min;
cout<<"Enter time in hours:";
cin>>hrs1;
cout<<"Enter time in minutes:";
cin>>min;
time(hrs,hrs1,min);

}






void time(int time1,int time2,int time3)
{
time1=time2*60;
if(time1>time3)
{
cout<<time2;
} 
if(time1<time3)
{

cout<<time3;
} 
}