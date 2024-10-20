#include <iostream>
using namespace std;
int digit(int number);
main()
{
    cout<<"Enter a number";
    int number;
    cin>>number;
    int result= digit( number);
    cout<<result;

}
int digit(int number)
{
    int n,result=0;
    for(n=0;(number>10||number<-10);n++)
    {
        number=number/10;
        result=n;
        result=result+1;
    }
    if((number<10&&number>0)||(number<0&&number>-10))
    {
       result=result+1;  
    }
   else if(number==10)
    {
     result=result+2;
    }
       else if(number==0)
    {
     result=result+1;
    }
    return result;
    }
   