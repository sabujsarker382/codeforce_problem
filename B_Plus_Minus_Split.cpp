#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin>>s;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
                sum1++;
            else
            {
                sum2++;
            }
        }
       

        cout << abs(sum1 - sum2) << endl;
    }
}