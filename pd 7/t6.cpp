#include<iostream>
using namespace std;
string prime(int number);
main()
{
        int number;
    cout<<"Enter any number:";
    cin>>number;
  string result=  prime( number);
  cout<<result;
}
string prime(int number)
{
         string result;
    for(int i=3;i*i<=number;i=i+2)
    {
        if(number%i==0)
        {
         result="0";
        }
        
       
        
    }
    
        
             
            result="1";
        
     
      if(number==2)
        {
            result="1";
        }
        if(number%2==0)
        {
            result="0";
        }
    return result;
}