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
        int left, right;

        left = s.find('B');
        right = s.rfind('B');

        int segment_length = max(right - left + 1, 0);
        cout << segment_length << endl;
    }
}