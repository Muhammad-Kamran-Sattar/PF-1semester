#include <iostream>
using namespace std;

int main() 
{
    int daysVisited, patients, dailyTreated;
    int initialDoctors = 7;
    int treated = 0, untreated = 0;
    int currentDoctors = initialDoctors;

    cout << "Enter the number of days you visited the hospital: ";
    cin >> daysVisited;

    for (int i = 1; i <= daysVisited; i++) 
    {
        cout << "Number of patients on Day " << i << ": ";
        cin >> patients;
        
        if ( patients > currentDoctors)
        {
            dailyTreated = currentDoctors;
        }
        else 
        {
            dailyTreated = patients;
        }

        if (i % 3 == 0 && untreated > treated) 
        {
            currentDoctors++ ;
            dailyTreated++ ;
        }

        treated += dailyTreated;
        untreated += (patients - dailyTreated);
    }

    cout << "Total Treated Patients: " << treated << endl;
    cout << "Total Untreated Patients: " << untreated << endl;

    return 0;
}
