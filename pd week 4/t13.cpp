#include<iostream>
using namespace std;
void roll(int ,int ,int );
main()
{

int position1,position2,rolll;
cout<<"Enter your position:";
cin>>position1;
cout<<"Enter your friends position:";
cin>>position2;
roll(rolll,position1,position2);

}






void roll(int rol,int tile1,int tile2)
{
rol=tile1-tile2;
if(rol<=6)
{
cout<<"true"<<endl;
} 
if(rol>6)
{

cout<<"false"<<endl;
} 
}