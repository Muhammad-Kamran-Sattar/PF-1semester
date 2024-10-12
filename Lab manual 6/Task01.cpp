#include <iostream>
using namespace std;
string greaterNum(int num1, int num2);

int main()
{
    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    string result;
    result= greaterNum ( num1 , num2 ) ;
    cout << result;
    return 0;
}

string greaterNum(int num1, int num2)
{
    string result;
    if (num1>num2)
    {
        result = "True";
    }
    else if (num2>num1)
    {
        result = "False";
    }   
    return result; 
}