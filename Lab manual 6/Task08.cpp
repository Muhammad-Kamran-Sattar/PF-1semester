#include <iostream>
using namespace std;
float discount (string day, string month, int price);

int main()
{
    string day, month;
    int price;
    float result;
    cout << "Enter the day of purchase: ";
    cin >> day;
    cout << "Enter the month of purchase: ";
    cin >> month;
    cout << "Enter the purchase amount: ";
    cin >> price;

    result = discount (day, month, price);
    cout << "Payable amount after discount: " << result;
}

float discount (string day, string month, int price)
{
    float result;

    if ( ((month == "October") || (month == "March") || (month == "August")) && (day == "Sunday") )
    {
        result = price - (price*0.1);
    }
    else if ( ((month == "November") || (month == "December") && (day == "Monday")) )
    {
        result = price - (price*0.05);
    }
    else
    {
        result = price;
    }

    return result;
}