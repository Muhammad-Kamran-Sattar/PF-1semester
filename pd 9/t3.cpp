#include<iostream>
using namespace std;
bool check(string name);
main()
{
    /*input the name or any string */
  string name;
  cout<< "Enter anything :";
  cin>>name;
 bool result=false;
  result= check( name);
  cout<<result;
}
bool check(string name)
{
    int idx=0,count=0;
    /* for string lenght*/
    while(name[idx]!='\0')
    {
        idx++;
        count++;
    }
    if(idx%2==0)/*for even*/
    {
        return true;
    }
    else  /*for odd */
    {
        return false;
    }

}
