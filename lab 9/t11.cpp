#include <iostream>
using namespace std;
void reverse(int number[],int n);
main()
{
    int n;
    cout<<"Enter index of arrray :";
    cin>>n;
    int number[n];
    if(n<0)
    {
        cout<<"Enter index is negative";
        return 0;
    }
    int idx=0;int count=0;
    cout<<"Enter the three numbers one per line:";
    for( idx=0;idx<n;idx++)
    {
    cin>>number[idx];
    }
    reverse( number,n);   
}
void reverse( int number[],int n)
{
    int count=0, idx=0;
while( number[idx]<n)
{
  idx++;
}
count=idx;
cout<<"Reverse numbers are : ";
while(count>=0)
{
    cout<<number[count]<<" ";
    count--;
}

}