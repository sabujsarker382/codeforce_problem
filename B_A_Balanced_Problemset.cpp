#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int d = x / n;

        int e = x % n;
        float d2 = static_cast<float>(x) / n;

        if (e == 0)
        {
            cout << x / n << endl;
        }
        else if (d2 < n)
        {
            cout << x - (d * n) << endl;
        }
        else
        {
            cout << x - ((d + 1) * (n - 1)) << endl;
        }
    }
}
