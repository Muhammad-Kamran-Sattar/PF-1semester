#include<iostream>
using namespace std;
void tri(int);
main()
{
cout<<"Enter the lenght";
int lenght;
cin>>lenght;
tri( lenght);
}
void tri(int lenght)
{
    for(int i=1;i<=lenght;i++)
    {
    
        for(int y=1;y<=i;y++)
        {
            cout<<"*";
        }
       cout<<endl;    
    }
}