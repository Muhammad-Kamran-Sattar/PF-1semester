#include <iostream>
using namespace std;
float lowestPrice (float kilometers, string timeOfDay);

int main ()
{
    float kilometers, result;
    string timeOfDay;
    cout << "Enter the number of kilometers: ";
    cin >> kilometers;
    cout << "Enter the period of the day (day/night): ";
    cin >> timeOfDay ;

    result = lowestPrice (kilometers, timeOfDay);
    cout << "Lowest price for " << kilometers << " kilometers is: " << result << " EUR." ;
    return 0;
}


float lowestPrice (float kilometers, string timeOfDay)
{
    float result, taxiPrice, busPrice, trainPrice ;
    taxiPrice = 0.70;

    if (timeOfDay == "day")
    {
        taxiPrice = taxiPrice + (kilometers*0.79) ;
    }
    else if (timeOfDay == "night")
    {
        taxiPrice = taxiPrice + (kilometers*0.90) ;
    }
    busPrice = kilometers*0.09   ;
    trainPrice = kilometers*0.06 ;

    if ( ( (kilometers >= 20)  && (kilometers < 100 ) ) )
    {
        result = busPrice ;
    }
    else if (  kilometers >= 100  )
    {
        result = trainPrice ; 
    }
    else
    {
        result = taxiPrice;
    }
    return result;
}