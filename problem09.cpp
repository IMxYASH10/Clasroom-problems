/*Given a positive integer, write a program to count the number of set bits (1s) in its binary representation.
 The program should return the count of bits that are set to 1.*/
#include <iostream>

using namespace std;

int main() { 
    int n, count = 0;
    cin >> n;

    while (n > 0) {
        count += n % 2;
        n = n / 2;
    }

    cout << "count of bits is: " << count << endl;

    return 0;
}
