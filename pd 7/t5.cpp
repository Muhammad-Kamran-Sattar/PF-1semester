#include<iostream>
using namespace std;
void triangle(int number);
main()
{
        int number;
    cout<<"Enter the  number of the triangle:";
    cin>>number;
triangle( number);
}
void triangle(int number)
{
    int n=0;
    for(int i=1;i<=number;i++)
    {
        n=n+i;
        if(i==number)
        {
            cout<<"Dots in the triangle are:"<<n;
        }
    }
}