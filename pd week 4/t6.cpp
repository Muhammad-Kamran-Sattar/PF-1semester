#include <iostream>
#include<windows.h>
void gotoxy(int , int );
void h();
void a();
void s();
void n();
using namespace std;
main()
{
system("cls");
h();
a();
s();
s();
a();
n();
}

void h()
{
cout<<"##    ##"<<endl;
cout<<"##    ##"<<endl;
cout<<"########"<<endl;
cout<<"##    ##"<<endl;
cout<<"##    ##"<<endl;
cout<<"        "<<endl;
}
void a()
{
cout<<"   ## "<<endl;
cout<<" ##  ##"<<endl;
cout<<" ###### "<<endl;
cout<<" ##  ##"<<endl;
cout<<" ##  ##"<<endl;
cout<<"        "<<endl;
}
void s()
{
cout<<"  #### "<<endl;
cout<<" ##    "<<endl;
cout<<"  ####    "<<endl;
cout<<"     ##    "<<endl;
cout<<"  #### "<<endl;
cout<<"        "<<endl;
}
void n()
{
cout<<" ##    #"<<endl;
cout<<" # #   #"<<endl;
cout<<" #  #  #"<<endl;
cout<<" #    ##"<<endl;
cout<<" #     #"<<endl;
cout<<"        "<<endl;
}








void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}