#include <iostream>
using namespace std;

int main()
{
    //Time Complexity is O (n^2)
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << arr[i] << " ";
    }
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            product *= arr[j];
        }
        cout << product << " ";
    }





    return 0;
}