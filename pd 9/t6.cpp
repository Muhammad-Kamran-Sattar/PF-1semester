#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter the transformation number:";
    cin>>num;
    int numbers[3];
    cout<<"Enter numbers :"<<endl;
    for(int idx=0;idx<3;idx++)
    {
         cin>>numbers[idx];
    }
    for(int x=0;x<num;x++)
    {
        int idx=0;
        for( idx=0;idx<3;idx++)
        {
            if(numbers[idx]%2==0)
            {
                numbers[idx]=numbers[idx]-2;
            }
            if(numbers[idx]%2!=0)
            {
              numbers[idx]=numbers[idx]+2;  
            }
           
        }
    }
    cout<<"After transformation:";
        for(int idx=0;idx<3;idx++)
      {
      cout<<numbers[idx]<<" ";
      }


}

