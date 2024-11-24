#include <iostream>
using namespace std;
main()
{
    int numbers[5]={1,2,3,4,5};
    int sum=0, count=0;
    int avg=0;
    for(int idx=0;idx<5;idx++)
    {
    sum=sum+numbers[idx]; 
    count=count+1;
    }
    avg=sum/count;
    cout<<"Sum:"<<sum<<endl;
    cout<<"Average :"<<avg;
}