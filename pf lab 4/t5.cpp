#include <iostream>
using namespace std;
void inches();
main()
{
inches();

}

void inches()
{
 
 cout<< "Enter the meausrement in inches:";
 float inch;
 cin>>inch;
 float feet;
 feet=inch/12;
 cout<<"Eqiullent in feet: "<<feet<<endl;
}