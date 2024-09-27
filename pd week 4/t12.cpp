#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{

int speedo;
cout<<"Enter your speed :";
cin>>speedo;
checkSpeed( speedo);

}






void checkSpeed(int speed)
{

if(speed>100)
{
cout<<"Halt...You will be challenged :"<<endl;
} 
if(speed<=100)
{

cout<<"Perfect!you are doing good :"<<endl;
} 
}