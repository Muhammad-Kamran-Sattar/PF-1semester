#include<iostream>
using namespace std;
void downtri(int lenght);
void uptri(int lenght);
main()
{
cout<<"Enter the lenght";
int lenght;
cin>>lenght;
uptri( lenght);
downtri( lenght);
}


void uptri(int lenght)
{
    for(int i=1;i<=lenght;i++)
    {
     for(int x=lenght;x>i;x--)
     {
        cout<<" ";
     }
        for(int y=1;y<=i;y++)
        {
            cout<<"*";
                 
        }
               cout<<endl;
    }
}
void downtri(int lenght)
{
    for(int i=lenght;i>=1;i--)
    {
     for(int x=lenght;x>i;x--)
     {
        cout<<" ";
     }
        for(int y=1;y<=i;y++)
        {
            cout<<"*";
                 
        }
               cout<<endl;
    }
}