#include <iostream>
using namespace std;
int digitSum(int number);

int main()
{
    int number, result;
    cout << "Enter a number: ";
    cin >> number;
    result = digitSum(number);
    cout << "Sum of digits: "<< result;
}

int digitSum(int number)
{
    int result, digit;
    for (int i=1; number>10; i++)
    {
        digit = number%10 ;
        number = number/10;
        result = result + digit;
    }
    if ((number<=10)&&(number>=0))
    {
        result = result+number;
    }
    return result;
}