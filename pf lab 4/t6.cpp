#include <iostream>
using namespace std;
void rubiks();
main()
{
rubiks();

}

void rubiks()
{
 
 cout<< "Enter the side lenght of the rubiks cube:";
 int l;
 cin>>l;
 int sticker;
 sticker=l*l*6;
 cout<<"Numberfs of stickers needed: "<<sticker<<endl;
}