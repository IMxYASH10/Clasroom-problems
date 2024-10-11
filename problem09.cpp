/* Write a function that takes three integers as input and returns the maximum of the three numbers using a ternary operator.
Three integers a, b, and c.
Return the maximum integer.*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Number 1: " << endl;
    cin >> a;
    cout << "Enter Number 2: " << endl;
    cin >> b;
    cout << "Enter Number 3: " << endl;
    cin >> c;

    if (a > b && a > c)
    {
        cout << "The Maximum Integer is " << a << endl;
    }
    if (b > a && b > c)
    {
        cout << "The Maximum Integer is " << b << endl;
    }
    if (c > b && c > a)
    {
        cout << "The Maximum Integer is " << c << endl;
    }

    return 0;
}
