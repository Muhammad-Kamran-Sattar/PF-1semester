#include <iostream>
using namespace std;
main()
{
  cout<<"Enter the movie name:";
  string name;
  cin>>name;
  cout<<"Enter adult ticket price:";
  int price;
  cin>>price;
  cout<<"Enter child ticket price:";
  int price2;
  cin>>price2;
  cout<<"Enter the number of adult tickets :";  
  int sold;
  cin>>sold;
  cout<<"Enter the number of child tickets :";  
  int sold2;
  cin>>sold2;
  cout<<"Enter the percentage of the amount to be donated to charity :";  
  int per;
  cin>>per;
  cout<<"        "<<endl;
  cout<<"Movie: "<<name<<endl;
  float total;
  total=price*sold+price2*sold2;
  cout<<"Total amount generated from ticket sales:  "<< total<<endl;
 float n;
 n=(total*per)/100;
 cout<<"donation to charity :"<<n<<endl;
 float r;
 r=total-n;
  cout<<"Remaining amount after donation :"<<r;
  
}
  
 

   