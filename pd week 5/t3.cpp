#include<iostream>
#include<cmath>
using namespace std;
void projectTimecalculation(int need_hour,int days,int worker_s )
{
    int working_days;
     working_days = days * 0.9;
    int hours_per_worker_per_day = 10;//8+2
    int total_working_hours;
    total_working_hours= (worker_s * working_days * hours_per_worker_per_day);
    floor(total_working_hours);
     if (total_working_hours >= need_hour) 
     {
       int hours_left = total_working_hours - need_hour;
        cout<<"Yes!"<<hours_left<<" hours left." << endl;
    } 
    else
    {
        int additional_hours_needed = need_hour - total_working_hours;
        cout<<"Not enough time!"<<additional_hours_needed<<" hours needed."<< endl;
    }
}
int main()
{
    int need_hours,day_avalable,workers;
    cout<<"Enter the needed hours ";
    cin>>need_hours;
    cout<<"Enter the days that the firm  has  ";
    cin>>day_avalable;
    cout<<"Enter number of workers ";
    cin>>workers;
    projectTimecalculation(need_hours,day_avalable,workers);
}