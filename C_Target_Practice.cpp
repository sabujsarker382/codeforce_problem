#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        int num = 0, i, j;
        for (i = 1; i <= 10; i++)
        {
            for (j = 1; j <= 10; j++)
            {
                cin >> c;
                if (c == 'X')
                {
                    num += min(min(i, 10 - i + 1), min(j, 10 - j + 1));
                }
            }
        }
        cout << num << endl;
    }
}