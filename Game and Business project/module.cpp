#include<iostream>
using namespace std;
void signup();
int password;
string name;
main()
{
signup();

}
void signup()
{
    cout<<"Sign up"<<endl;
    cout<<"Enter your name";
    cin>>name;
    cout<<"Enter new password";
    cin>>password;
}