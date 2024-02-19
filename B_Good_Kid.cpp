#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum = 1;
        for (int i = 1; i < n; i++)
        {
            sum = sum * arr[i];
        }
        sum = sum * (arr[0] + 1);
        cout << sum << endl;
    }
}