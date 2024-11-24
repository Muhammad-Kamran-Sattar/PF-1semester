#include <iostream>
using namespace std;
main()
{
    cout<<"enter the idx";
    int n;
    cin>>n;
    int numbers[n];
    for(int idx=0;idx<n;idx++)
    {
    cout<<"enter  number:";
    cin>>numbers[idx];
    }
    for(int count=0;count<n;count++)
    {
        cout<<numbers[count]<<endl;
    }
    

}