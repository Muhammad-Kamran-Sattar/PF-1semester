#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

int main()
{
    int num1, num2, gcd, lcm;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    gcd = calculateGCD(num1, num2);
    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;
    return 0;
}

int calculateGCD(int number1, int number2)
{
    int gcd=1, rem1, rem2;
    for (int i=1; i<=number1 && i<=number2; i++ )
    {
        if( number1%i == 0 && number2%i == 0 )
        {
            gcd = i;
        }
    }
    return gcd;
}

int calculateLCM(int number1, int number2, int gcd)
{
    int lcm;
    lcm = (number1*number2)/gcd;
    return lcm;
}