#include <iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
 {
    int person, Tp;
    cout << "Enter the number of people in the household: ";
    cin >> person;
    cout << "Enter the number of rolls of TP: ";
    cin >>Tp;
    tpChecker(person, Tp);
}
void tpChecker(int people, int tp) 
{   
     int sheets_per_roll = 500;
     int sheets_per_day_per_person = 57;
     int days_needed = 14;
    int total_sheets;
    total_sheets= tp * sheets_per_roll;
    int total_sheets_needed ; 
  total_sheets_needed  = people * sheets_per_day_per_person * days_needed;

    int days_last; 
    days_last= total_sheets / (people * sheets_per_day_per_person);
    
    if (total_sheets_needed > total_sheets)
    {
        cout << "Your TP will only last " << days_last << " days, buy more!" << endl;
    } if (total_sheets_needed < total_sheets)
{
cout << "Your TP will last " << days_last << " days, no need to panic!" << endl;
}
}
