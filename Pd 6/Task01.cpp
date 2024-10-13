#include <iostream>
using namespace std;
string decideActivity (string temp, string humidity);

int main()
{
    string temp, humidity, activity;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

    activity = decideActivity (temp, humidity);
    cout << "Recommended activity: " << activity ;
    return 0;
}


string decideActivity (string temp, string humidity)
{
    string activity;
    if ( (temp == "warm") && (humidity == "dry") )
    {
        activity = "Play tennis.";
    }
    else if ( (temp == "warm") && (humidity == "humid") )
    {
        activity = "Swim.";
    }
    else if ( (temp == "cold") && (humidity == "dry") )
    {
        activity = "Play Basketball.";
    }
    else if ( (temp == "warm") && (humidity == "humid") )
    {
        activity = "Watch tv. ";
    }
    return activity;
}