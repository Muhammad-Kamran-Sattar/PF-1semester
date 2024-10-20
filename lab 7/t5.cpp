#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
      cout<<"Enter digit:";
    int digit;
    cin>>digit;
    digitSum(digit);
}
int digitSum(int number)
{
    int result=0;
        for(int i=0;i<=number;i++)
   {
         int x=number%10;
         result=result+x;      
         number=number/10;
       
        
                  
}
cout<<result;
}