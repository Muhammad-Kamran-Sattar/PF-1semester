#include <iostream>
#include<windows.h>
void playerMove(int x, int y);
void printMaze();
void gotoxy(int , int );
using namespace std;
main()
{
system("cls");
int x = 3, y = 1;
while (true)
{
system("cls");
printMaze();
playerMove(x, y);
y = y + 1;
 if(y==8)
{
 y=2;
}

}

}



void playerMove(int x, int y)

{
gotoxy(x, y);
cout << "P";
Sleep(200);
gotoxy(x, y);
cout << " ";
}

void printMaze()
{

cout << "##########################" << endl;
cout << "#                        #" << endl;
cout << "#                        #" << endl;
cout << "#                        #" << endl;
cout << "#                        #" << endl;
cout << "#                        #" << endl;
cout << "#                        #" << endl;
cout << "#                        #" << endl;
cout << "##########################" << endl;

}






void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}