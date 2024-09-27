#include <iostream>
#include<windows.h>
void gotoxy(int , int );
using namespace std;
main()
{
system("cls");
cout<<"test";
gotoxy(15, 15);
cout << "My name is M.kamran sattar";

}






void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}