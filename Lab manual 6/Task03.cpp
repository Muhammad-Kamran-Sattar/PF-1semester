#include <iostream>
using namespace std;
float perimeter (char shape, float number);

int main()
{
    float number, result;
    char shape;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value (radius for circle, side length for square, triangle and hexagon): ";
    cin >> number;
    result = perimeter (shape, number);
    cout << "The perimeter is: " << result;
    return 0;
}

float perimeter (char shape, float number)
{
    float result;
    if (shape == 's')
    {
        result = 4 * number ;
    }
    else if (shape == 'c')
    {
        result = 6.28*number;
    }
    else if (shape == 't')
    {
        result = 3*number;
    }
    else if (shape == 'h')
    {
        result = 6*number;
    }
    return result;
}
