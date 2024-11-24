#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many elements you want to enter:";
    cin>>n;
    int count=0;
    int nums[count];
 int num[n];
 cout<<"Enter the numbers :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        
    }
    int j=0;
    bool check=false;
    for(int i=0;i<n-1;i++)
    {
      if(( num[i+1]>num[i]   ) && ( num[i+1] > num[i+2] ))
      {
         count++;

      while(j<count)
           {
               nums[j]=num[i+1];
              
              j++;
            
           }    
           check =true;
      }  
 
    }

             if (check==true)
             {
        cout<<"The numbers are :"<<endl;
        for(int j=0;j<count;j++)
        {
            cout<<nums[j]<<" ";
        }
             }
             
             else
             {
                cout<<"No peak found"<<endl;
             }
}
