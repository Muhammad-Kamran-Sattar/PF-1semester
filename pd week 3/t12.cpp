#include<iostream>
using namespace std;
main()
{
 cout<<"Numbers of square meters you can paint:";
 int paint;
 cin>>paint;
 cout<<"Width of the singal wall (in meters):";
 int width;
 cin>>width;
 cout<<"Height of the singal wall (in meters):";
 int height;
 cin>>height;
 int walls;
 walls=paint/(width*height);
 cout<<"Number of walls you can paint:"<<walls; 
} 