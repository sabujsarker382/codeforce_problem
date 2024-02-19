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
        vector<int> trace(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> trace[i];
        }

        string s(n, 'a');
        for (int i = 0; i <= n; ++i)
        {
            int count = trace[i];
            int count2 = trace[i + 1];
            if (count2 <= count)
            {
                char c = 'a' + count;
                s[i] = c;
            }
            else
            {
                char c = 'a';
                s[i] = c;
            }
        }

        cout << s << endl;
    }
    return 0;
}
