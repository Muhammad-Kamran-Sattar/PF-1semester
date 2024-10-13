#include <iostream>
using namespace std;
float CellularCompany (char service, int minutes, char timeOfDay);

int main()
{
    char service, timeOfDay ;
    int minutes;
    float charges;
    cout << "Enter the service type (R/r for regular, P/p for premium): ";
    cin >> service;
    if ( service == 'P' || service == 'p')
    {   
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> timeOfDay;
    }    
    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    charges = CellularCompany (service, minutes, timeOfDay);
    if ( service == 'P' || service == 'p')
    {
        cout << "Service Type: Premium" << endl;
    }
    else if ( service == 'R' || service == 'r')
    {
        cout << "Service Type: Regular" << endl;
    }
    cout << "Total minutes used: " << minutes << " minutes" << endl;
    cout << "Amount Due: $" << charges;
    return 0;
}


float CellularCompany (char service, int minutes, char timeOfDay)
{
    float charges;
   
    if ( (service == 'R') || (service == 'r') )
    {
        charges = 10.00 ;
        if ( minutes > 50 )
        {
            charges = charges + ( 0.20 * (minutes-50) ) ;
        }
    }
    else if ( (service == 'P') || (service == 'p') )
    {
        charges = 25.00 ;
        if ( (timeOfDay == 'd') && ( minutes>75 ) )
        {
            charges = charges + (0.10 * (minutes-75) ) ;
        }
        else if ( (timeOfDay == 'n') && ( minutes>100 ) )
        {
            charges = charges + (0.05 * (minutes-100) ) ;
        }
    }

    return charges;
}