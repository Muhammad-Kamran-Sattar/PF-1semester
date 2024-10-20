#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
void printname();
void printWelcomeArt();
void login();
int user(int a);
int admin(int);
using namespace std;
    string name1,name2;
    int password2,password1;
    double books1; 
string bookss;
main()
{

printname();  
printWelcomeArt();
 login();
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
void login()
{ gotoxy(20,16  );
  cout<<"Enter your type (user/admin):";
  string type;
  cin>>type;
  if(type=="Admin"||type=="admin")
  {
    cout<<"Enter your name";
    cin>>name2;
    cout<<"Enter your password";
    cin>>password1;
    system("cls");
    printname();
    int option1;
    system("cls");
     printWelcomeArt();
      gotoxy(10,15  );
    cout<<"Admin option 0:";
     gotoxy(10,16  );
     cout<<"For exit press 1...";
      gotoxy(10,17  );
    cout<<"Your option.... ";
    cin>>option1;
    int a=option1;
    if(a==0)
    {
     admin(a);   
    }
   else 
   if(option1==1)
      {
        system("cls");
        printname();  
        printWelcomeArt();
        login();
      }
  } else
   if (type=="User"||type=="user")
  { system("cls");
    printname();
    gotoxy(20,16  );
    cout<<"    Login   \n";
    cout<<"Enter your name:";
    cin>>name1;
    cout<<"Enter your password:";
    cin>>password2;
    system("cls");
    printname();
    int option1;
    gotoxy(0,16  );
    cout<<"User option 0:";
    gotoxy(0,17  );
     cout<<"For exit press 1...:";
     gotoxy(0,18  );
    cout<<"Your option.... ";
    cin>>option1;
    int a=option1;
        if(a==0)
    {
     user(a);   
    }
     else if(option1==1)
      {
        system("cls");
        printname();  
        printWelcomeArt();
        login();
      }
  
  }else 
  {
    cout<<"Invalid";
  }
  
}

int admin(int a)
{
   
    if(a==0)
    { 
      int option1;
      system("cls");
       printWelcomeArt();
       gotoxy(0,15  );
      cout<<"Admin details option 1 ";
      gotoxy(0,16  );
      cout<<"User details option 2";
      gotoxy(0,17  );
      cout<<" Your option.... ";
      cin>>option1;
      if(option1==2)
      {
        int priceperbook=200;
        int total=priceperbook*books1;
     cout<< "User name:\t"<<"\tBooks details:\t"<<"\tPrice per book\t"<<"\tTotal price\t"<<"\t Books names\t"<<endl;
     cout<<name1<<"\t\t\t"<<books1<<"\t\t\t"<<priceperbook<<"\t\t\t"<<total<<"\t\t\t"<<bookss<<endl;
     int exit;
     cout<<"For exit press 1:";
     cin>>exit;
     if(exit==1)
      {
        system("cls");
        printname();  
        printWelcomeArt();
        login();
      }
      }
      if(option1==1)
      {
        cout<<"Admin name:\t"<<name2<<"\t Password:\t"<<password1<<endl;
        int exit;
     cout<<"For exit press 1:";
         cin>>exit;
     if(exit==1)
      {
        system("cls");
         printname();  
        printWelcomeArt();
        login();
      }
      }
    
    }
    else{
        cout<<"incorrect password";
    }
   }
     

int user(int a)
{
   
            system("cls");
         printname();  
        printWelcomeArt();
        gotoxy(0,15  );
        cout<<"Available books\nRise_of_nations\nLife_after_death\nYou_and_me\nLast_ride\nFirst_love "; 
     gotoxy(0,22  );
    cout<<"Enter books you want to read or want to borrow :";
    cin>>books1;
    gotoxy(0,23  );
    cout<<"Enter the books name in horizontal:";   
    cin>>bookss;
   
    int exit;
     gotoxy(0,24  );
    cout<<"For exit press 1:";
    cin>>exit;
    if(exit==1)
    {
        system("cls");
         printname();  
        printWelcomeArt();
        login();
    }
}