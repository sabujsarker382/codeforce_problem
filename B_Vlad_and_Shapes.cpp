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
        string s = "SQUARE";
        for (int i = 0; i < n; i++)
        {
            string st;
            cin >> st;
            int c = count(st.begin(), st.end(), '1');
            if (c == 1)
                s = "TRIANGLE";
        }
        cout << s << endl;
    }
}