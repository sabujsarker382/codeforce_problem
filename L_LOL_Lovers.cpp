#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'L')
            cnt1++;
        else
        {
            cnt2++;
        }
    }
    if (cnt1 == 1 && cnt2 == 1)
    {
        cout << "1" << endl;
    }
    else if (cnt1 <= 2 && cnt2 <= 2)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}