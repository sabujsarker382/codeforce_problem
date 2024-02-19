#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 10;
ll a[N];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		ll l = 1, r = 3e9, m, p;
		while (r > l + 1)
		{
			m = l + r >> 1;
			p = 0;
			for (int i = 0; i < n; i++)
				p += m - min(m, a[i]);
			if (p > x)
				r = m;
			else
				l = m;
		}
		cout << l << endl;
	}
}
