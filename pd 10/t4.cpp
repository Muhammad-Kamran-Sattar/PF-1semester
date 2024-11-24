#include <iostream>
using namespace std;

const int maxSize = 100;
int arr[maxSize];

bool isRepeatingCycle(int cycleLength) 
{
    int size = 0;
    
    while ( (arr[size] != 0) && (size < maxSize) ) 
    {
        size++;
    }
    
    if (cycleLength > size) 
    {
        return true;
    }

    for (int i = 0; i < size - cycleLength; i++) 
    {
        if (arr[i] != arr[i + cycleLength]) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    int size;
    cout << "Enter the number of elements you want to enter: ";
    cin >> size;

    for ( int idx = 0; idx < size; idx ++ ) 
    {
        cout << "Enter number " << idx+1 << ": ";
        cin >> arr[idx];
    }

    int cycleLength;
    cout << "Enter the cycle length: ";
    cin >> cycleLength;

    if (isRepeatingCycle(cycleLength)) 
    {
        cout << "True" << endl;
    } 
    else 
    {
        cout << "False" << endl;
    }

    return 0;
}