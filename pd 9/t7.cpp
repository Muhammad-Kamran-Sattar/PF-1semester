#include<iostream>
using namespace std;
main()
{
    string s1;
    string s2;
    cout<<"Enter string 1:";
    cin>>s1;
    cout<<"Enter string 2:";
    cin>>s2;

    int count=0;
   
   for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++){
            if(s1[i] == s2[j])
            {
             count++;
             break; 
            }
            
        }
    
}
cout<<count;
}
