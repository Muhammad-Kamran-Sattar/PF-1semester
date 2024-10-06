#include <iostream>
using namespace std;
double volume (float length,float width,float height, string unit );
int main()
{
float length,width,height;
double result;
string unit;
cout<<"Enter the lenght ";
cin>>length;
cout<<"Enter the width ";
cin>>width;
cout<<"Enter the height ";
cin>>height;
cout<<"Enter the unit of output";
cin>> unit;
result = volume( length,width,height,unit);
cout<<"The volume of the pyramid is "<<result<<"cubic"<< unit;
} 
double volume (float length,float width,float height, string unit )
{
double result;
if(unit=="meter")
{
result=(height*length*width)/3;
return result;    
} 
if(unit=="centimeter")
{
result=((height*100)*(length*100)*(width*100))/3;
return result;    
}    
if(unit=="millimeter")
{
result=((height*1000)*(length*1000)*(width*1000))/3;
return result;    
} 
if(unit=="kilometer")
{
result=((height/1000)*(length/1000)*(width/1000))/3;
return result;    
}    
}