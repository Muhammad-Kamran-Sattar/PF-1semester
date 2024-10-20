#include <iostream>
using namespace std;
void percentage(int limit,float p1, float p2, float p3, float p4, float p5);

int main()
{
    int limit, number;
    float p1=0 , p2=0 , p3=0 , p4=0 , p5=0 ;

    cout << "Enter numbers count: ";
    cin >> limit;
    for (int i=1; i<=limit; i++)
    {
        cout << "Enter a number: ";
        cin >> number;
        if ((number>=0) && (number<=199))
        {
            p1 += 1 ;
        }
        else if ((number>=200)&&(number<=399))
        {
            p2 += 1 ;
        }
        else if ((number>=400)&&(number<=599))
        {
            p3 += 1 ;
        }
        else if ((number>=600)&&(number<=799))
        {
            p4 += 1 ;
        }
        else if ((number>=800)&&(number<=1000))
        {
            p5 += 1 ;
        }
    }
    percentage( limit, p1, p2, p3, p4, p5);
}

void percentage(int limit,float p1, float p2, float p3, float p4, float p5)
{
    cout << p1*100/limit << endl;
    cout << p2*100/limit << endl;
    cout << p3*100/limit << endl;
    cout << p4*100/limit << endl;
    cout << p5*100/limit << endl;
}