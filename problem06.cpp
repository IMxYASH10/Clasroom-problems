#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Marks:" << endl;
    cin >> n;

    if (n >= 90) {
        cout << "You Got A Grade." << endl;
    } else if (n >= 80) {
        cout << "You Got B Grade." << endl;
    } else if (n >= 70) {
        cout << "You Got C Grade." << endl;
    } else if (n >= 60) {
        cout << "You Got D Grade." << endl;
    } else {
        cout << "You Got F Grade." << endl;
    }

    return 0;
}
