#include <iostream>
using namespace std;
bool check(string word,char letter);
main()
{
string word;
cout<<"enter the word"<<endl;
cin>>word;
cout<<"enter the letter"<<endl;
char letter;
cin>> letter;
bool result=check(word,letter);
cout<<result;
}
bool check(string word,char letter)
{
   bool isfound=false;
    for( int idx=0;word[idx]!='\0';idx++)
    { 
        if(word[idx]==letter)
        {
            isfound=true;
            break;
        }
     
    }
    return isfound;
}