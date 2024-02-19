#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        ll a = 0, b = 0, u = 1e9, v = 1e9, c;
        for (int i = 0; i < n; i++)
            cin >> c, v = min(v, c), a += c;
        for (int i = 0; i < n; i++)
            cin >> c, u = min(u, c), b += c;
        cout << min((ll)(v * n + b), (ll)(u * n + a)) << endl;
    }
}
