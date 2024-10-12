#include <iostream>
using namespace std;
string calcCost (float budget, string category, int people);
float calcBudget( float budget, int people );

int main()
{
    string category, result;
    float budget, leftBudget;
    int people;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/normal): ";
    cin >> category;
    cout << "Enter the number of people: ";
    cin >> people;

    leftBudget = calcBudget( budget, people );
    result = calcCost ( leftBudget,  category,  people);
    cout << result;
    return 0;
}


float calcBudget( float budget, int people )
{   
    float leftBudget;
    if ( (people >= 1) && (people <= 4 ) )
    {
        leftBudget = budget - (budget*0.75);
    }
    else if ( (people >= 5) && (people <= 9 ) )
    {
        leftBudget = budget - (budget*0.60);
    }
    else if ( (people >= 10) && (people <= 24 ) )
    {
        leftBudget = budget - (budget*0.50);
    }
    else if ( (people >= 25) && (people <= 49 ) )
    {
        leftBudget = budget - (budget*0.40);
    }
    else if ( people >= 50 )
    {
        leftBudget = budget - (budget*0.25);
    }
    return leftBudget;
}


string calcCost (float leftBudget, string category, int people)
{
    string result;
    float cost, money;

    if (category == "VIP")
    {
        cost = 499.99*people;
    }
    else if (category == "normal")
    {
        cost = 249.99*people;
    }

    if ( leftBudget > cost )
    {
        money = leftBudget - cost ;
        result = "Yes! You have " + to_string (money) +  " leva left";  
    }
    else if ( cost > leftBudget )
    {
        money = cost - leftBudget ;
        result = "Not enough money! You need " + to_string (money) +  " leva more";
    }
   
    return result;
}