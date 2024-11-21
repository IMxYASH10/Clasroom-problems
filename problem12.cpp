
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6 + 2
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
     cout << " " << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[n - 1] == arr[n])
        {
            cout << arr[i] << " " ;
        }
        else if (arr[i] == arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}