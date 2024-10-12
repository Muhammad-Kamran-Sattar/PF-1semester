#include <iostream>
using namespace std;
string same (int num1, int num2 , int num3);

int main()
{
    int num1, num2, num3;
    string result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    result = same ( num1, num2 , num3);
    cout << result;
    return 0;
}

string same (int num1, int num2 , int num3)
{
    string result;
    if ( (num1==num2) && (num2==num3) )
    {
        result = "The entered numbers are the same.";
    }
    else
    {
        result = "The entered numbers are NOT the same.";
    }
    return result;
}
