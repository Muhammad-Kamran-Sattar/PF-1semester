#include <iostream>
using namespace std;
string checkTitle (int age, char gender);
 
int main ()
{
    int age;
    char gender;
    string result;

    cout << "Enter your age: ";
    cin >> age ;
    cout << "Enter your gender (m/f): ";
    cin >> gender;

    result =  checkTitle ( age, gender);
    cout << result;
    return 0;
}


string checkTitle (int age, char gender)
{
    string result;
    if ( (gender == 'm') && (age >= 16) )
    {
        result = "Your personal title is: Mr.";
    }
    else if ( (gender == 'm') && (age < 16) )
    {
        result = "Your personal title is: Master.";
    }
    else if ( (gender == 'f') && (age >= 16) )
    {
        result = "Your personal title is: Ms.";
    }
    else if ( (gender == 'f') && (age < 16) )
    {
        result = "Your personal title is: Miss";
    }

    return result;
}