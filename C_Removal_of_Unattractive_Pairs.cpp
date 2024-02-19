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
		map<char, int> freq;
		int maxfreq = 0;
		for (int i = 0; i < n; i++)
		{
			freq[s[i]]++;
			maxfreq = max(maxfreq, freq[s[i]]);
		}
		 
		if (maxfreq > n / 2)
		{
			cout << maxfreq - (n - maxfreq) << endl;
		}
		else
		{
			cout << n % 2 << endl;
		}
	}
}
