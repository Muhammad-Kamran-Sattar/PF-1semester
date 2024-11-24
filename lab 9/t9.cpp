#include <iostream>
using namespace std;
void reverse(string word);
main()
{
    string word;
    cout<<"Enter a word :";
    cin>>word;
  reverse( word);   
}
void reverse(string word)
{
    int count=0, idx=0;
while( word[idx]!='\0')
{
  idx++;
  
    
}
count=idx;
while(count>=0)
{
    cout<<word[count];
    count--;

}

}