#include <iostream>
using namespace std;
bool check(string word,char letter);
void location(string word);
main()
{
    string word;
    cout<<"Enter a word :";
    cin>>word;
    location( word);
}
void location(string word)
{
    int idx,count=0;
for( idx=0;word[idx]!='\0';idx++)
{
    count=count+1;
    cout<<word[idx]<<"location is:"<<count<<endl;
}
}