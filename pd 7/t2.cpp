#include<iostream>
using namespace std;
void belowtri(int);
main()
{
cout<<"Enter the lenght";
int lenght;
cin>>lenght;
belowtri(lenght);
}

void belowtri(int lenght)
{
    for(int i=1;i<=lenght;i++)
    {
    
        for(int y=lenght;y>=i;y--)
        {
            cout<<"*";
        }
       cout<<endl;    
    }
}