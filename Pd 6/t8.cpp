#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    cout<<"Enter the year type:";
    string year;
    cin>>year;
    cout<<"Enter the number of holidays :";
    int holidays;
    cin>>holidays;
    cout<<"Enter the number of weekends :";
    int weekends;
    cin>>weekends;
    double result= calculateVolleyballGames( year, holidays,  weekends);
    cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int weekends=48;
    double workingweekends=weekends*1/4;
    double  freeWeekendsInSofia = weekends - workingweekends - hometownWeekends;
    double playsInSofia = freeWeekendsInSofia * (3.0 / 4.0);
    double playsInHometown = hometownWeekends;
    double totalPlays = playsInSofia + playsInHometown;
    double holidaysPlayed = (2.0 / 3.0) * holidays;
    totalPlays =totalPlays+ holidaysPlayed;
       if (yearType == "leap") {
        totalPlays= totalPlays*1.15;
    }
    return totalPlays;
}