#include<iostream>
using namespace std;
#include<windows.h>
#include<conio.h>
void maze();
void name();
void moveplayerright();
void moveplayerleft();
void player();
void eraseplayer();
void erase_enemy1();
void enemy3();
void erase_enemy3();
void enemymove3();
void enemy2();
void erase_enemy2();
void enemy1();
void enemymove();
void enemymove2();

void gotoxy(int x, int y);
int ex1=1, ey1=1,ex2=22,ey2=2,ey3=1,ex3=1;
int px=35,py=36;
int main()
{
 system("cls");   
 name();
 maze();
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
 enemymove();
 enemymove3();
 enemymove2();
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
    gotoxy(ex2, ey2+5);
    cout << "     |     |    " ;
    gotoxy(ex2,ey2+6);
    cout << "     |     |    " ;
    gotoxy(ex2, ey2+7);
    cout << "     |_____|    " ;
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
    gotoxy(ex2, ey2+5);
    cout << "                 " ;
    gotoxy(ex2, ey2+6);
    cout << "                 " ;
    gotoxy(ex2, ey2+7);
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
   void moveplayerleft()
   {
   eraseplayer();
   px=px-1;
   player();
   if(px==1)
   {
    eraseplayer();
    px=100;
    
   }

   }
   void moveplayerright()
   {
   eraseplayer();
   px=px+1;
   player();
    if(px==100)
   {
    eraseplayer();
    px=1;
    
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
    gotoxy(ex3, ey3+4);
    cout << "   |   " ;
    gotoxy(ex3, ey3+5);
    cout << "   O   " ;
    gotoxy(ex3, ey3+6);
    cout << "  / \\  " ;
    gotoxy(ex3, ey3+7);
    cout << " /   \\ " ;
    gotoxy(ex3, ey3+8);
    cout << " \\___/ " ;
    
                                                                                                  
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
    gotoxy(ex3, ey3+4);
    cout << "            ";
    gotoxy(ex3, ey3+5);
    cout << "            ";
    gotoxy(ex3, ey3+6);
    cout << "            " ;
    gotoxy(ex3, ey3+7);
    cout << "           " ;
    gotoxy(ex3, ey3+8);
    cout << "          " ;


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
