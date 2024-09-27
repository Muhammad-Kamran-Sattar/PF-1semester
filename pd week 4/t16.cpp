#include<iostream>
using namespace std;
void pet(int holidays);
main()
{

int days;
cout<<"Enter the holidays:";
cin>>days;
pet(days);

}





void pet(int holidays)
{
int timeg;
timeg=365-holidays;
timeg=(timeg*63+holidays*127);
float norm;
norm=(30000-timeg);
if(norm>timeg)
{

cout<<"Tom will run away"<<endl;
cout<<norm<<" min for play"<<endl;
} 
if(norm<timeg)
{

cout<<"Tom will sleep "<<endl;
cout<<norm<<" min less for play"<<endl;
} 

}