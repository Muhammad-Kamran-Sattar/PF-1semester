#include <iostream>
using namespace std;
void self();
main()
{
 while(true)
{
self();
}
}


void self()
{
  cout<<"Enter your name :";
  string name;
  cin>>name;
  cout<<name<<endl;

}