#include<iostream>
using namespace std;
#include<windows.h>
#include<conio.h>
void maze();
void name();
void pill();
void pillerase();
void powerincrement1();
void scoreboard();
void powerincrement2();
void scoreboard2();
void moveplayerdown();
void moveplayer2down(); 
void moveplayerup();
void moveplayer2up();
char getCharAtxy(short int x, short int y);
void singleplayer();
void multiplayer();
void moveplayerright();
void mainmenu();
void moveplayerleft();
void player();
void player2();
void eraseplayer();
void erase_enemy1();
void enemy3();
void erase_enemy3();
void enemymove3();
void enemy2();
void erase_enemy2();
void enemy1();
void enemymove();
void moveplayer2left();
void moveplayer2right();
void enemymove2();
void eraseplayer2();
void gotoxy(int x, int y);
int ex1=1, ey1=1,ex2=22,ey2=2,ey3=1,ex3=1;
int px=35,py=36,px2=50,py2=36;
int score=0,score2=0;
int main()
{
 system("cls");   
 name();
 mainmenu();
int option;
gotoxy(19, 19);
cout<<"Single player option 1"<<endl;
gotoxy(19, 20);
cout<<"Multi player option 2"<<endl;
gotoxy(19, 21);
cout<<"For exit........option 3"<<endl;
gotoxy(19, 22);
cout<<"Your option.....";
cin>>option;
 if(option==1)
 {
  singleplayer();
 }
 else if(option==2)
 {
  multiplayer();
 }else if(option==3)
 {
 system("cls"); 
 system("exit()");
 }
  else 
  {
    cout<<"Invalid option";
  }
 
 
 
 
}
void mainmenu()
{     
       system("cls");
       gotoxy(69, 14);
        cout << "*************************\n";
       gotoxy(69, 15);
        cout << "*       Main Menu       *\n";
      gotoxy(69, 16);
        cout << "*************************\n";
      gotoxy(69, 17);
        cout << "                          \n";
      gotoxy(69, 18);
        cout << "                          \n";
}

void singleplayer()
{

 system("cls");   
 maze();
 pill();
 player();
  while(true)
 {
    if (GetAsyncKeyState(VK_LEFT))

   {
     moveplayerleft();
     
   }
   if (GetAsyncKeyState(VK_RIGHT))
   {
     moveplayerright();
   }
      if (GetAsyncKeyState(VK_UP))
   {
     moveplayerup();
   }
         if (GetAsyncKeyState(VK_DOWN))
   {
     moveplayerdown();
   }
    powerincrement1();
 enemymove();
 enemymove3();
 enemymove2();

  Sleep(50);


 }
}
void multiplayer()
{

 system("cls");   
 maze();
 pill();
 player();
 player2();
  while(true)
 {
    if (GetAsyncKeyState(VK_LEFT))

   {
     moveplayerleft();
     
   }
   if (GetAsyncKeyState(VK_RIGHT))
   {
     moveplayerright();
   }
    else if (GetAsyncKeyState(VK_UP))
   {
     moveplayerup();
   }
    else if (GetAsyncKeyState(VK_DOWN))
   {
     moveplayerdown();
   }
   else if (GetAsyncKeyState(VK_NUMPAD5))
   {
     moveplayer2up();
   }
    else if (GetAsyncKeyState(VK_NUMPAD2))
   {
     moveplayer2down();
   }
   else if(GetAsyncKeyState(VK_NUMPAD1))
   {
   moveplayer2left();
   }
    else if(GetAsyncKeyState(VK_NUMPAD3))
   {
   moveplayer2right();
   }
 enemymove();
 enemymove3();
 enemymove2();
 powerincrement2();
  Sleep(50);
 
 }
}

void name()
{  
    system("color 04");
    gotoxy(19, 14);
    cout << "|| *****   *        **    * *  *  *    *        *  *******  *****   *****  *       * ||"<<endl ;  
    gotoxy(19, 15);
    cout << "|| *    *  *       *  *  *     * *     *        *     *      *   *  *   *  *       * ||"<<endl ;  
    gotoxy(19, 16);
    cout << "|| *****   *       ****  *     **      *    *   *     *      *   *  *   *  *   *   * ||"<<endl ;
    gotoxy(19, 17); 
    cout << "|| *    *  *       *  *  *     * *     *  *   * *     *      *   *  *   *  * *   * * ||"<<endl ;  
    gotoxy(19,18);   
    cout << "|| *****   ******  *  *   * *  *  *    *        *  *******  *****   *****  *       * || "<<endl ;
    cout<<"                                                                                                   "<<endl;
    cout<<"                                                                                                   "<<endl;
    cout<<"                                      Press any key to continue...."<<endl;
    getch();
}
void maze()
{
    system("cls");
    system("color 01");
    cout << "#####################################################################################################################" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl; 
    cout << "#                                                                                                                   #" << endl; 
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl; 
    cout << "#                                                                                                                   #" << endl; 
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#                                                                                                                   #" << endl;
    cout << "#####################################################################################################################" << endl;

    

    
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
   void player()
{  
    
    gotoxy(px, py);
    cout << " /\\     /\\  " ;
    gotoxy(px, py+1);
    cout << " {  `---'  } " ;
    gotoxy(px, py+2);
    cout << " {  O   O  } " ;
    gotoxy(px, py+3);
    cout << " ~~>  V  <~~ " ;
    gotoxy(px, py+4);
    cout << " \\ \\_____/ / " ;
    gotoxy(px, py+5);
    cout << " \\_______/  "  ;
}
   void player2()
{  
    
    gotoxy(px2, py2);
    cout << " /\\     /\\  " ;
    gotoxy(px2, py2+1);
    cout << " {  `---'  } " ;
    gotoxy(px2, py2+2);
    cout << " {  O   O  } " ;
    gotoxy(px2, py2+3);
    cout << " ~~>  V  <~~ " ;
    gotoxy(px2, py2+4);
    cout << " \\ \\_____/ / " ;
    gotoxy(px2, py2+5);
    cout << " \\_______/  "  ;
}
  void eraseplayer2()
{  
    
    gotoxy(px2, py2);
    cout << "             " ;
    gotoxy(px2, py2+1);
    cout << "             " ;
    gotoxy(px2, py2+2);
    cout << "              " ;
    gotoxy(px2, py2+3);
    cout << "              " ;
    gotoxy(px2, py2+4);
    cout << "              " ;
    gotoxy(px2, py2+5);
    cout << "              " ;

}
   void moveplayer2left()
   {
    if ( getCharAtxy(px2 - 1, py2) == ' ') {
        eraseplayer2();
        px2 =px2- 1;
        player2();
    }

   }
   void moveplayer2right()
   {
    if (  getCharAtxy(px2 + 15, py2) == ' ') {
        eraseplayer2();
        px2 += 1;
        player2();
    }
   }
 void enemy1()
{ 
    gotoxy(ex1, ey1);
    cout << "   O   " ;
    gotoxy(ex1, ey1+1);
    cout << "  / \\  ";
    gotoxy(ex1, ey1+2);
    cout << " /   \\ ";
    gotoxy(ex1, ey1+3);
    cout << " \\___/ ";
    gotoxy(ex1, ey1+4);
    cout << "   |   " ;
    gotoxy(ex1, ey1+5);
    cout << "   O   " ;
    gotoxy(ex1, ey1+6);
    cout << "  / \\  " ;
    gotoxy(ex1, ey1+7);
    cout << " /   \\ " ;
    gotoxy(ex1, ey1+8);
    cout << " \\___/ " ;
    
                                                                                                  
}
 void erase_enemy1()
{   
    gotoxy(ex1, ey1);
    cout << "            " ;
    gotoxy(ex1, ey1+1);
    cout << "            " ;
    gotoxy(ex1, ey1+2);
    cout << "           " ;
    gotoxy(ex1, ey1+3);
    cout << "            " ;
    gotoxy(ex1, ey1+4);
    cout << "            ";
    gotoxy(ex1, ey1+5);
    cout << "            ";
    gotoxy(ex1, ey1+6);
    cout << "            " ;
    gotoxy(ex1, ey1+7);
    cout << "           " ;
    gotoxy(ex1, ey1+8);
    cout << "          " ;


}


 void enemy2()
 {
    gotoxy(ex2, ey2);
    cout << "     _     _    " ;
    gotoxy(ex2, ey2+1);
    cout << "    / \\___/ \\   " ;
    gotoxy(ex2, ey2+2);
    cout << "   |   O O   |  " ;
    gotoxy(ex2, ey2+3);
    cout << "    \\   ^   /   " ;
    gotoxy(ex2, ey2+4);
    cout << "     |\\___/|    " ;

 }
  void erase_enemy2()
 {
    gotoxy(ex2, ey2);
    cout << "                 " ;
    gotoxy(ex2, ey2+1);
    cout << "                 " ;
    gotoxy(ex2, ey2+2);
    cout << "                 " ;
    gotoxy(ex2, ey2+3);
    cout << "                 " ;
    gotoxy(ex2, ey2+4);
    cout << "                 " ;
 }
 void enemymove()
 {
   
    erase_enemy1();
    ex1=ex1+1;
    if(ex1==100)
    {
      ex1=3;  
    }
     enemy1();

   } 
    void enemymove2()
 {
   
    erase_enemy2();
    ey2=ey2+1;
   
    if(ey2==35)
    {
      ey2=2;  
    }
     enemy2();

   }
  void eraseplayer()
{  
    
    gotoxy(px, py);
    cout << "             " ;
    gotoxy(px, py+1);
    cout << "              " ;
    gotoxy(px, py+2);
    cout << "              " ;
    gotoxy(px, py+3);
    cout << "              " ;
    gotoxy(px, py+4);
    cout << "              " ;
    gotoxy(px, py+5);
    cout << "              " ;
}
void moveplayerleft() {
    if ( getCharAtxy(px - 1, py) == ' ') {
        eraseplayer();
        px =px- 1;
        player();
    }
}
void moveplayerup() {
    if ( getCharAtxy(px-1 , py-1) == ' ') {
        eraseplayer();
        py =py- 1;
        player();
    }
}
void moveplayer2up() {
    if ( getCharAtxy(px2-1 , py2-1) == ' ') {
        eraseplayer2();
        py2 =py2- 1;
        player2();
    }
}

void moveplayerright() {
    if (  getCharAtxy(px + 15, py) == ' ') {
        eraseplayer();
        px += 1;
        player();
    }
}

void moveplayerdown() {
    if (  getCharAtxy(px, py+15&&py<=36 ) == ' ') {
        eraseplayer();
        py += 1;
        player();
    }
}
void moveplayer2down() {
    if (  getCharAtxy(px2, py2+15&&py2<=36 ) == ' ') {
        eraseplayer2();
        py2 += 1;
        player2();
    }
}


   
 void enemy3()
{ 
    gotoxy(ex3, ey3);
    cout << "   O   " ;
    gotoxy(ex3, ey3+1);
    cout << "  / \\  ";
    gotoxy(ex3, ey3+2);
    cout << " /   \\ ";
    gotoxy(ex3, ey3+3);
    cout << " \\___/ ";
  
    
                                                                                                  
}
 void erase_enemy3()
{   
    gotoxy(ex3, ey3);
    cout << "            " ;
    gotoxy(ex3, ey3+1);
    cout << "            " ;
    gotoxy(ex3, ey3+2);
    cout << "           " ;
    gotoxy(ex3, ey3+3);
    cout << "            " ;



}
void enemymove3() {
    erase_enemy3();
    ex3 -= 1;
    ey3 += 1; 
    if (ex3 < 1) {
        ex3 = 100;
    }
    if (ey3 > 34) {
        ey3 = 1; 
    }

    enemy3();
     Sleep(30);
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}


void powerincrement1() {
   
    if ( (px == 19&& py == 16)||( px == 19&& py+1 == 16) ||(px == 19&& py+2 == 16)||(px == 19&& py+3 == 16)||(px == 19&& py+4 == 16)||(px == 19&& py+5 == 16)) {
        score += 1; 
                       
         pillerase();  
         pill();           
        scoreboard();           
    }
}
void scoreboard() {
    gotoxy(120, 5);
    cout << "Player 1 score: " << score;

}
void scoreboard2() {
    gotoxy(120, 5);
    cout << "Player 1 score: " << score;
    gotoxy(120, 6);
    cout << "Player 2 score: " << score2;
}
void powerincrement2() {
    
    if ( (px == 19&& py == 16)||( px == 19&& py+1 == 16) ||(px == 19&& py+2 == 16)||(px == 19&& py+3 == 16)||(px == 19&& py+4 == 16)||(px == 19&& py+5 == 16)) {
        score += 1;              
        pillerase();            
        pill();                 
        scoreboard2();}
        else if((px2 == 19&& py2 == 16)||( px2 == 19&& py2+1 == 16) ||(px2 == 19&& py2+2 == 16)||(px2 == 19&& py2+3 == 16)||(px2 == 19&& py2+4 == 16)||(px2 == 19&& py2+5 == 16))
        {
     score2 += 1;              
        pillerase();            
        pill();                 
        scoreboard2();
        }           
    
}
void pill()
{
  gotoxy(19, 16);
  cout<<"P";
  
}
void pillerase()
{
  gotoxy(19, 16);
  cout<<" ";
  
}