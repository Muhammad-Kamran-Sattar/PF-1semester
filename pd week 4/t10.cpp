#include<iostream>
using namespace std;
void logic( string );
main()
{
string log;
cout<<"Enter tue or false :";
cin>>log;
logic( log);


}






void logic(string T)
{

if(T=="True")
{
cout<<"False";
} 
if(T=="False")
{
cout<<"True";
} 

}