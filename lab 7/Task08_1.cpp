#include <iostream>
using namespace std;
int calculateMoney(int age, int priceMachine, int priceToy);

int main()
{
    int age, priceMachine, priceToy, result;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of washing machine: ";
    cin >> priceMachine;
    cout << "Enter the unit price of each toy: ";
    cin >> priceToy;
    result = calculateMoney(age, priceMachine, priceToy);
    if (result > priceMachine)
    {
        cout << "Yes! Lilly can buy the washing machine." << endl;
        cout << "Spare Money: " << result-priceMachine;
    }
    else if (result<priceMachine)
    {
        cout << "No! Not enough money." << endl;
        cout << "Need More: " << priceMachine-result;
    }
    return 0;
}

int calculateMoney(int age, int priceMachine, int priceToy)
{
    int result, i , oddNums=0, evenNums=0 ;
    for( i=1 ; i<=age ; i++)
    {
        if (i%2 == 0)
        {
            evenNums ++ ;
        }
        else
        {
            oddNums ++ ;
        }
    }
    
    int evenPrice = 0, bdayMoney = 10 ;
    for ( int j=1 ; j<= evenNums ; j++)
    {
        evenPrice = evenPrice + (bdayMoney-1) ;
        bdayMoney = bdayMoney+10; 
    }
    int oddMoney = oddNums*priceToy;
    result = (oddMoney)+(evenPrice);
    
    return result;
}