#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int count, tons;
    float totalCost = 0;
    int totalTons = 0;
    float minibusTons = 0, truckTons = 0, trainTons = 0;

    cout << "Enter the count of cargo for transportation: ";
    cin >> count;

    for (int i = 1; i <= count; i++) 
    {
        cout << "Enter the tonnage of cargo: ";
        cin >> tons;
        
        totalTons += tons; 
        
        float price = 0; 
        if (tons >= 0 && tons <= 3) 
        {
            price = 200 * tons;
            minibusTons += tons;
        } 
        else if (tons > 3 && tons <= 11) 
        {
            price = 175 * tons;
            truckTons += tons;
        } 
        else if (tons > 11) 
        {
            price = 120 * tons;
            trainTons += tons;
        }
        
        totalCost += price;
    }

    float averagePricePerTon = totalCost / totalTons;

    float minibusPercentage = minibusTons / totalTons * 100;
    float truckPercentage = truckTons / totalTons * 100;
    float trainPercentage = trainTons / totalTons * 100;

    cout << fixed << setprecision(2);
    cout << "Average price per ton: " << averagePricePerTon << " USD" << endl;
    cout << "Percentage of cargo transported by minibus: " << minibusPercentage << "%" << endl;
    cout << "Percentage of cargo transported by truck: " << truckPercentage << "%" << endl;
    cout << "Percentage of cargo transported by train: " << trainPercentage << "%" << endl;

    return 0;
}
