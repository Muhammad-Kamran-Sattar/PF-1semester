#include<iostream>
using namespace std;
void primorial(int number);
main()
{
    int number;
    cout<<"Enter any number:";
    cin>>number;
    primorial( number);
  
}
void primorial(int number)
{
         int n=2;
    for(int i=3;i<=number;i=i+2)
    {
      n=n*i;
        
 }
 cout<<n; 
 }