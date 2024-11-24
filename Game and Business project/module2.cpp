#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
void printname();
void printWelcomeArt();
void signup();
void login();
void exit();
void exit2();
void user();
void exit3();
void admin();
using namespace std;
string password,password1,password2;
string name,name2,date;
string type,type2;
string name1;
int number=0,total=0;
int price=200,discount=0;
string books[5];
string books1[10]; 
string avabooks[5]={"Rise of nation","Love and death","Rahekool Makthom","Spiritual love","Life without humans"};    
main()
{

printname();  
printWelcomeArt();
 signup();
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
void signup()
{
    gotoxy(0,11  );
    cout<<"Sign up"<<endl;
    cout<<"Enter user type (admin/user):";
    cin>>type;
    if(type=="admin"||type=="Admin")
    {
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter new password:";
    cin>>password;
    }
    else if(type=="User"||type=="user")
    {
    cout<<"Enter your name:";
    cin>>name1;
    cout<<"Enter new password:";
    cin>>password1;  
    }
    else
    {
        cout<<"invalid user type ";
        exit();
    }
}
void exit()
{
    string exit1;
    cout<<"Press 0 to continue.....";
    cin>>exit1;
    if(exit1=="0")
    {
    system("cls");
        printname();  
        printWelcomeArt();
        signup();
        login();
    }
    
    else {
        cout<<"Invalid option:"<<endl;
        cout<<"Press 0 to continue.....";
        cin>>exit1;
    }
}
void exit2()
{
    string exit1;
    cout<<"Press 0 to continue.....";
    cin>>exit1;
    if(exit1=="0")
    {
    system("cls");
        printname();  
        printWelcomeArt();
        login();
    }
    
    else {
        cout<<"Invalid option:"<<endl;
        cout<<"Press 0 to continue.....";
        cin>>exit1;
    }
}
void login()
{
         system("cls");
         printname();  
         printWelcomeArt();
         gotoxy(0,11  );
         cout<<"********************Login******************"<<endl;
         cout<<"Enter your type (user/admin):";
         cin>>type2;
         if(type2=="admin"||type2=="Admin")
        {
           cout<<"Enter your name:";
           cin>>name2;
           cout<<"Enter your password:";
           cin>>password2;
           if((name2==name)&&(password2==password))
           {
            admin();
           }
           else
           {
            cout<<"Invalid name or password:";
            exit2();
           }    

        } 
        else if(type2=="user"||type2=="User")
        {
           cout<<"Enter your name:";
           cin>>name2;
           cout<<"Enter your password:";
           cin>>password2; 
           if((name2==name1)&&(password2==password1))
           {
            user();
           }
           else
           {
            cout<<"Invalid name or password:";
            exit2();
           }       
        }   
        else 
        {
            cout<<"Invalid type :";
            exit2();
        }              
}
void admin()
{
   
       int option1;
       system("cls");
       printWelcomeArt();
       gotoxy(0,15  );
       cout<<"Admin details option 1 ";
       gotoxy(0,16  );
       cout<<"User details option 2";
       gotoxy(0,17  );
       cout<<"Books to be added option 3";
       gotoxy(0,18  );
       cout<<"Available books option 4";
       gotoxy(0,19  );
       cout<<"For exit option 5";
       gotoxy(0,20  );
       cout<<" Your option.... ";
       cin>>option1;
      if(option1==2)
      {
        
          system("cls");
            
          printWelcomeArt();

        string option2;
        gotoxy(0,11  );
        cout<<"Billing details option 1:"<<endl;
        cout<<"Books borrowed option 2:"<<endl;
        cout<<"Enter your option...";
        cin>>option2;
        if(option2=="1")
        {
          system("cls");
            
          printWelcomeArt();
          gotoxy(0,11  );
            cout<<"*********Billing*********"<<endl;
            cout<<"User name:"<<name1<<endl;
            cout<<"Books borrowed:"<<number<<endl;
            cout<<"Date of borrow:"<<date<<endl;
            cout<<"Total bill"<<total<<endl;
            exit3();
        }
        if(option2=="2")
      {
        system("cls");
        printWelcomeArt();
        gotoxy(0,11  );
        cout<<"*********Books borrowed*********"<<endl;
         for(int idx=0;idx<10;idx++)
         {
              cout<<books1[idx]<<"  ";
         }  
         exit3();  
      }

     
     exit3();
      }
      if(option1==1)
      {
        cout<<"Admin name:\t"<<name2<<"\t Password:\t"<<password2<<endl;
        exit3();
      }
      if (option1==3)
      {
       
        cout<<" you  can  enter only five books at a time!";
        cout<<"Enter the books name here:";
        for(int idx=0;idx<5;idx++)
        {
         cin>>books[idx];
        }
         exit3();
      }
      if (option1==4)
      {
        cout<<"Availaible books are:";
        for(int idx=0;idx<5;idx++ )
        {
        
         cout<<books[idx]<<" "<<endl;
        }
        for(int idx=0;idx<5;idx++ )
        {
         cout<<avabooks[idx]<<" "<<endl;
        }
      exit3();  
    }
        if(option1==5)
    {
    exit();
    }
    else{
        cout<<"Invalid";
        exit3();
    }
    
 }
void exit3()
{
    string exit;
         cout<<"For exit press 1:";
         cin>>exit;
         if(exit=="1")
        {
         system("cls");  
         printWelcomeArt();
         admin();
        }
        else if (exit!="1") {
            cout<<"Invalid option....";
            exit3();
        }
}
void exit4()
{
    string exit;
         cout<<"For exit press 1:";
         cin>>exit;
         if(exit=="1")
        {
         system("cls");  
         printWelcomeArt();
         user();
        }
        else if (exit!="1") {
            cout<<"Invalid option....";
            exit4();
        }
}
   void user()
{
   
    system("cls");  
    printWelcomeArt();
    gotoxy(0,15  );
    string option1;
    cout<<"Available books option 1"<<endl;
    cout<<"Borrow books option 2"<<endl;
    cout<<"Bill option 3"<<endl;
    cout<<"For exit option 4"<<endl;
    cout<<"your option.....";
    cin>>option1;

    if(option1=="1")
    {
    cout<<"Availaible books are:"<<endl;
        for(int idx=0;idx<5;idx++ )
        {
         cout<<books[idx]<<" "<<endl;
        }
        for(int idx=0;idx<5;idx++ )
        {
         cout<<avabooks[idx]<<" "<<endl;
        }
        exit4();    
    }
    if(option1=="2")
    {
    cout<<"Availaible books are:"<<endl;
        for(int idx=0;idx<5;idx++ )
        {
        
         cout<<books[idx]<<" "<<endl;
        }
        for(int idx=0;idx<5;idx++ )
        {
         cout<<avabooks[idx]<<" "<<endl;
        }
        cout<<"Enter the books you want to borrow (max 10).Note! to stop enter 0."<<endl;
        for(int idx=0;idx<10;idx++)
        {
            string booktitle;
            cin>>booktitle;
            if(booktitle=="0")
            { 
                
                break;
            }
         books1[idx]=booktitle;
            
        }
        cout<<"Enter the number of books you  borrow:"<<endl;
        cin>>number;
        cout<<"Enter the date of borrow:"<<endl;
        cin>>date;
        if( number>=4 && number<10 )
        {
         discount=price*0.1;   
        }
       total=(price*number)+(number*2)-discount;
        exit4();    
    }
     if(option1=="3")
     {
       cout<<"*************Bill***********"<<endl;
       cout<<"Price for borrow each book is:"<<price<<" rs "<<endl;
       cout<<"Books borrowed:"<<number<<endl;
       cout<<"Date of borrow:"<<date<<endl;
       cout<<"Tax per book : 2 rs"<<endl;
       cout<<"Total bill:"<<total<<endl;
       cout<<"Note! return books within 10 days of borrow any ways the fine of 100 Rs per book will be charged...";
        exit4();   
     }
     if(option1=="4")
     {
     exit();
     }
}