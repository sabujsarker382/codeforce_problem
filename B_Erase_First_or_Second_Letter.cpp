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
        string s;
        cin >> s;
        int sum = 0;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            sum = sum + st.size();
        }
        cout << sum << endl;
    }
}