#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
void printname();
void printWelcomeArt();
int option(int );
int user(int a);
int admin(int);
using namespace std;
    string name1;
    int password2;
    double books1; 

main()
{

printname();  
printWelcomeArt();
 int a;
 option( a);
}
void printname()
 { 
    system("cls");
    gotoxy(20,1  );
    cout << "| |   (_)| |__  _ _  __ _  _ _  _  _   _ __   __ _  _ _   __ _  __ _  ___  _ __   ___  _ _  | |_   ___ _  _  ___| |_  ___  _ __  ";
    gotoxy(20,2  );
    cout << "| |__ | || '_ \\| '_|/ _` || '_|| || | | '  \\ / _` || ' \\ / _` |/ _` |/ -_)| '  \\ / -_)| ' \\ |  _| (_-<| || |(_-<|  _|/ -_)| '  \\ ";
    gotoxy(20,3 );
    cout << "|____||_||_.__/|_|  \\__,_||_|   \\_, | |_|_|_|\\__,_||_||_|\\__,_|\\__, |\\___||_|_|_|\\___||_||_| \\__| /__/ \\_, |/__/ \\__|\\___||_|_|_| ";
    gotoxy(20,4  );
    cout << "                                |__/                           |___/                                   |__/                       ";
}
void printWelcomeArt() {
    gotoxy(60,7  );
    cout << " __  __        _                                 ";
    gotoxy(60,8  );
    cout << "|  \\/  | __ _ (_) _ _    _ __   ___  _ _   _  _ ";
    gotoxy(60,9  );
    cout << "| |\\/| |/ _` || || ' \\  | '  \\ / -_)| ' \\ | || |";
    gotoxy(60,10  );
    cout << "|_|  |_|\\__,_||_||_||_| |_|_|_|\\___||_||_| \\_,_|";
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int option(int option1)
{    
    gotoxy(0,13  );
    cout<<"Book reader option 1:\n";
    cout<<"Admin option 2:\n";
    cout<<"Book seller  option 3:\n";
    cout<<"For exit press 0...\n";
    cout<<"Your option.... ";
    cin>>option1;
    int a=option1;
    if(a==2)
    {
     admin(a);   
    }
    if(a==1)
    {  
         user(a);
    }
    if(option1==0)
    {   
        system("cls");
        system("exit()");
    }
    
}
int admin(int a)
{
    string name;
    int password;
 
 if(a==2)
   {
    cout<<"    Login   \n";
    cout<<"Enter your name.";
    cin>>name;
    cout<<"Enter your password.";
    cin>>password;
    if(password==123456)
    { 
      int option1;
      cout<<"Admin details option 1 \n";
      cout<<"User details option 2\n";
      cout<<" Your option.... ";
      cin>>option1;
      if(option1==2)
      {
        int priceperbook=200;
        int total=priceperbook*books1;
     cout<< "User name:\t"<<"\tPassword: \t"<<"\tBooks details:\t"<<"\tPrice per book\t"<<"\tTotal price\t"<<endl;
     cout<<name1<<"\t\t\t"<<password2<<"\t\t\t"<<books1<<"\t\t\t"<<priceperbook<<"\t\t\t"<<total<<endl;
     int exit;
     cout<<"For exit press 1:";
     cin>>exit;
     if(exit==1)
      {
        system("cls");
        printname();  
        printWelcomeArt();
        option(a);
      }
      }
      if(option1==1)
      {
        cout<<"Admin name:\t"<<name<<"\t Password:\t"<<password<<endl;
        int exit;
     cout<<"For exit press 1:";
         cin>>exit;
     if(exit==1)
      {
        system("cls");
         printname();  
        printWelcomeArt();
        option(a);
      }
      }
    
    }
    else{
        cout<<"incorrect password";
    }
   }
     
}
int user(int a)
{
   
    if(a==1) 
    { 
    cout<<"    Login   \n";
    cout<<"Enter your name:";
    cin>>name1;
    cout<<"Enter your password:";
    cin>>password2;
    cout<<"Enter books you want to read or want to borrow :";
    cin>>books1;
    }
    int exit;
    cout<<"For exit press 1:";
    cin>>exit;
    if(exit==1)
    {
        system("cls");
         printname();  
        printWelcomeArt();
        option(a);
    }
}