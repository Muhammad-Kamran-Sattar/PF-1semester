#include <iostream>
using namespace std;
float totalIncome (string screening, int rows, int columns);

int main()
{
    string screening;
    int rows, columns;
    float result;
    cout << "Enter the screening type: ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    result = totalIncome (screening, rows, columns);
    cout << "Total income: " << result << " EUR";
    return 0 ;
}

float totalIncome (string screening, int rows, int columns)
{
    int result;
    if ( screening== "Premiere")
    {
        result = (rows*columns)*12;
    }
    else if ( screening== "Normal")
    {
        result = (rows*columns)*7.5;
    }
    else if ( screening== "Discount")
    {
        result = (rows*columns)*5;
    }

    return result;
}