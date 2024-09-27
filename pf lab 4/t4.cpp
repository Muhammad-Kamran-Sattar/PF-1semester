#include <iostream>
using namespace std;
void fuel();
main()
{
fuel();

}

void fuel()
{
 
 cout<< "Enter distance:";
 int dis;
 cin>>dis;
 int oil;
 oil=dis*10;
 cout<<"Fuel is "<<oil<<endl;
}