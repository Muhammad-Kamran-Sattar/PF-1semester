#include<iostream>
using namespace std;

void fabio(int n );
main()
{
int lenght;
cout<<"Enter the number of lenght:";
cin>>lenght;
fabio( lenght );
}
void fabio(int lenght )
{
int n1=0,n2=1,next;
    
    if(lenght==1)
        {
        cout<<n1;
        }
        else  if(lenght==2)
        {
        cout<<n1<<","<<n2;
        }
        else
        {
    for(int i=3;i<=lenght;i++)   
    {
        next=n1+n2;
        n1=n2;
        n2=next;
       
      if(i<=3)
      {cout<<"0,1,"<<next<<",";}
      if(i>3)
      {cout<<next<<",";}
     
     }
}
}