#include<iostream>
using namespace std;
void boom(int number[],int n);
main()
{
    int n;/*takes index*/   
    cout<<"Enter index :";
    cin>>n;
    int number[n];
    cout<<"Enter the numbers:";/*taking numbers*/
    for (int idx=0;idx<n;idx++)
    {
    cin>>number[idx];
    }
      boom(number, n);
   
}
void boom(int number[],int n)
{
     int idx=0;
     bool boom;/*check purpose*/
    for (idx=0;idx<n;idx++)/*traverse the array  */
    { 
      int num=number[idx];
      while(num>0)/*check for number 7*/
      {
        if (num%10==7)
        {
            boom=true;
        }
        num /= 10;
      }
            }
    if(boom==true)
   { 
     cout<<"Boom";
   }
   else {
    cout<<"there is no 7 in the array";
    }
}
