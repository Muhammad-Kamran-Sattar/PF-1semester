#include<iostream>
using namespace std;
int main()
{
 int data;
 cout<<"Enter the number of elements in the array: ";
 cin>>data;
 cout<<"Enter the weigth: ";
 int weight[data];
 for(int idx=0;idx<data;idx++)
 {
    cin>>weight[idx];
 }
 int less=weight[0];
 int temp;

 for(int idx=1;idx<data;idx++)//find the min number
 {
    if(weight[idx]<less)
    {
        less=weight[idx];
    }
 }
 while(weight[0]!=less)//make the iteration upto min
{
 for(int idx=0;idx<data;idx++)//sort the array
 {
    if(weight[idx+1]<weight[idx])
    {
        temp=weight[idx];
        weight[idx]=weight[idx+1];
        weight[idx+1]=temp;

    }
 }
}
 cout<<"The sorted weight is:";
 for(int idx=0;idx<data;idx++)
 {
    cout<<weight[idx]<<" ";
 }

}