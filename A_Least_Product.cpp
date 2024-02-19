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
        int num = 0, x, z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x < 0)
                num++;
            if (x == 0)
                z = 1;
        }
        if (num % 2 == 1 || z)
            cout << "0\n";
        else
            cout << "1\n1 0\n";
    }
    return 0;
}