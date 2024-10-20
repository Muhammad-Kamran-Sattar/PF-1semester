#include <iostream>
using namespace std;
bool isPrime(int number);
unsigned long primorial (int number);

int main()
{
    int number;
    unsigned long product;
    cout << "Enter Number: ";
    cin >> number;
    
    product = primorial (number);
    if (number < 1)
    {
        cout << "Invalid Input.";
    }
    else
    {
        cout << "Primorial of the entered number is: " << product;
    }
    return 0;
}


bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number%i == 0)
        {
            return false;
        }
    }
    return true;
}

unsigned long primorial (int number)
{
    int num = 2, product = 1 ;  // first prime number.
    for (int i=1 ; i<=number; i++)
    {
        if ( isPrime(num))
        {
            product = product*num ;
        }
        num ++ ;
    }
    return product;
}
