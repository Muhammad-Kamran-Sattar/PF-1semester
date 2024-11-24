#include<iostream>
using namespace std;
int main()
{
   int size;
   cout<<"Enter the size of the box: ";
   cin>>size;
 int box[size];
  for(int idx=0;idx<size;idx++)
  {
    cin>>box[idx];
  }  
  int idx=0;
  int x;
  int sum=0;
  while(idx<size)
  {
    x=box[idx]*box[idx+1]*box[idx+2];
    sum=sum+x;
    idx+=3;
    
  }
  cout<<"The sum of the product of three consecutive elements is: "<<sum;
}