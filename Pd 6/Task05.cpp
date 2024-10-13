#include <iostream>
using namespace std;
double calculateFruitPrice (string fruit, string day, double quantity);

int main()
{
    string fruit, day;
    double quantity, result;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week ( e.g. Monday, Tuesday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;

    result = calculateFruitPrice ( fruit, day, quantity);
    if ( ( (fruit == "banana") || (fruit == "apple") || (fruit == "orange") || (fruit == "grapefruit") || (fruit == "kiwi") ||
           (fruit == "pineapple") || (fruit == "grapes") ) && ( (day == "Monday") || (day == "Tuesday") || (day == "Wednesday") ||
           (day == "Thursday") ||  (day == "Friday") || (day == "Saturday") || (day == "Sunday") ) )
    {    
        cout << "Price: " << result;
    }
    else 
    {
        cout << "Error.";
    }    
    return 0;
}

double calculateFruitPrice (string fruit, string day, double quantity)
{
    double result;
    if  ( (day == "Monday") || (day == "Tuesday") || (day == "Wednesday") || (day == "Thursday") || (day == "Friday") )
    {
        if (fruit == "banana")
        {
            result = 2.50*quantity ;
        }  
        else if (fruit == "apple")
        {
            result = 1.50*quantity ;
        }
        else if (fruit == "orange")
        {
            result = 0.85*quantity ;
        }
        else if (fruit == "grapefruit")
        {
            result = 1.45*quantity ;
        }
        else if (fruit == "kiwi")
        {
            result = 2.70*quantity ;
        }
        else if (fruit == "pineapple")
        {
            result = 5.50*quantity ;
        }
        else if (fruit == "grapes")
        {
            result = 3.85*quantity ;
        }
    }
    
    else if ( (day == "Saturday") || (day == "Sunday") )
    {
        if (fruit == "banana")
        {
            result = 2.70*quantity ;
        }  
        else if (fruit == "apple")
        {
            result = 1.25*quantity ;
        }
        else if (fruit == "orange")
        {
            result = 0.90*quantity ;
        }
        else if (fruit == "grapefruit")
        {
            result = 1.60*quantity ;
        }
        else if (fruit == "kiwi")
        {
            result = 3.00*quantity ;
        }
        else if (fruit == "pineapple")
        {
            result = 5.60*quantity ;
        }
        else if (fruit == "grapes")
        {
            result = 4.20*quantity ;
        }
    }
    return result;
}
