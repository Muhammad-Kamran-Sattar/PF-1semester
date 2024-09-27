#include <iostream>
#include<windows.h>
using namespace std;
void comparison(string ,string ,float ,float);
void aggergate(string,float,float,float);
void menu();
main()
{
system("cls");
string e,u,i;
float x,y,z,t,s;
menu();
aggergate(e,x, y,z);
comparison(u,i,t,s);
}



void menu()
{
cout<< "          Universty Admission Management System           "<<endl;
cout<< "                      Main Menu                           "<<endl;

}

void aggergate(string f,float d,float s,float a)
{
cout<<"Enter your name :";
string name;
cin>>name;
cout<<"Enter your matric marks :";
float m1;
cin>>m1;
cout<<"Enter your inter marks :";
float m2;
cin>>m2;
cout<<"Enter your ecat marks :";
float m3;
cin>>m3;
float agg;
agg=((m1/1100)*0.3+(m2/550)*0.3+(m3/400)*0.4)*100;
cout<<"your aggeregate is :"<<agg<<endl;
}
void comparison(string h,string j,float k,float l)
{
cout<<"Enter namedstd1 :";
string a;
cin>>a;
cout<<"Enter  namedstd2 :";
string b;
cin>>b;
cout<<"Enter  ecat marks of student 1 :";
float m4;
cin>>m4;
cout<<"Enter  ecat marks of student 2 :";
float m5;
cin>>m5;
if(m4>m5)
{
 cout<<a;
}
if(m5>m4)
{
cout<<b;
}

}
