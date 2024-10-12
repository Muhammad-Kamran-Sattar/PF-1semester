#include <iostream>
using namespace std;
int findGreatest (int num1, int num2, int num3);

int main()
{
    int num1, num2, num3, result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    result = findGreatest (num1 , num2 , num3);
    cout << "The greatest number is: " << result;
}

int findGreatest (int num1, int num2, int num3)
{
    int result;
    if ( (num1 > num2) && (num1 > num3) )
    {
        result= num1;
    }
    else if ( (num2 > num1) && (num2 > num3) )
    {
        result= num2;
    }
    if ( (num3 > num1) && (num3 > num2) )
    {
        result= num3;
    }
    return result;
}