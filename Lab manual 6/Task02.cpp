#include <iostream>
using namespace std;
string parityAnalysis(int number);

int main()
{
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    string result;
    result = parityAnalysis(number);
    cout << result;
    return 0;
}

string parityAnalysis(int number)
{
    int dig1, dig2, dig3;
    int mod1 , mod2 ;
    string result;

    mod1 = number%2 ;

    dig1= number%10 ;
    number = number/10 ;
    dig2 = number%10;
    number = number/10;
    dig3 = number ;
    int sum ;
    sum = dig1 + dig2 + dig3 ;

    mod2 = sum%2 ;

    if ( mod1 == mod2 )
    {
        result = "True";
    }
    else 
    {
        result = "False";
    }
    return result;
}