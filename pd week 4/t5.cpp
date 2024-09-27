#include <iostream>
#include<windows.h>
void gotoxy(int , int );
using namespace std;
main()
{
system("cls");
gotoxy(50,15);
cout<<"M.KAMRAN SATTAR";

}











void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}