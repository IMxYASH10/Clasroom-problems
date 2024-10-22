#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target = 9;

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[j] + arr[i] == target){
                cout << j << " " << i << endl;
            }
        }
    }
    return 0;
}
