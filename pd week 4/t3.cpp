#include <iostream>
#include<windows.h>
void printMaze();
void gotoxy(int , int );
using namespace std;
main()
{
system("cls");
printMaze();
gotoxy(3, 5);
cout<<"P";
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