#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
  cout<<"Enter a number:";
    int number;
    cin>>number;
      cout<<"Enter digit:";
    int digit;
    cin>>digit;
frequencyChecker( number,  digit);

}
int frequencyChecker(int number, int digit)
{
    int j=0;
    for(int i=0;i<=number;i++)
   {
    int x=number%10;
         number=number/10;   
          if(x==digit)
          {
            
            j=j+1;
            
          }  
   } 
   cout<<j;

}