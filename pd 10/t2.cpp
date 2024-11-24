#include <iostream>
using namespace std;
int counts(int &count,string data[],char &letter,int num);
int main()
{
    int num;
    cout << "Enter how many words you want to Enter:";
    cin >> num;
    string data[num];
    for (int idx = 0; idx < num; idx++)
    {
        int a = 1;
        cout << "Enter the word " << idx << ":";
        cin >> data[idx];
        a++;
    }
    char letter;
    cout << "Enter the letter you want to search for:" << endl;
    cin>>letter;
    int count=0;
        int result= counts(count, data, letter, num);
  cout<<"count is "<<result; 
}
int counts(int &count,string data[],char &letter,int num)
{
for(int idx=0;idx<num;idx++)
    {
         for (char c : data[idx])//take a range of characters from the string
         {
            if (c == letter) {
                count++;
            }
         }     
    }
 return count;
}