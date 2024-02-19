#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int arr[n], arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            arr1[i] = arr[i] % a;
        }
        sort(arr1, arr1 + n);
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
    }
}
