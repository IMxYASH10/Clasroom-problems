#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "k";
    cin >> k;
    int sum = 0;
    int ans = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] == k){
            ans++;
        }

        while (sum > k && zero <= i)
        {
            sum -= arr[zero];
            zero++;
        }
        if (sum == k)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}

