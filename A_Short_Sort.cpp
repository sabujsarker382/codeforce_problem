#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if ((s[0] == 'b' || s[0] == 'c') && (s[1] == 'a' || s[1] == 'c') && (s[2] == 'a' || s[2] == 'b'))
                count++;
        }

        if (count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
