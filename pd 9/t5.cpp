#include<iostream>
using namespace std;
 bool check(string elements[],int size);
main()
{
    int size=4;
string elements[4];/*taking elements from user */
for(int idx=0;idx<4;idx++)
{
 cin>>elements[idx];
}
if ( check( elements,size))
{
 cout<<true;

}
else{
    cout<<false;
}
}



/*check the elements are same or not*/
 bool check(string elements[],int size)
    {
        int idx=0;
         for (idx=0;idx<size;idx++)/*traverse the array  */
     {
        if(elements[idx]!=elements[0])
        {
            return false;
        }
        
     }
     return true;
    }
    