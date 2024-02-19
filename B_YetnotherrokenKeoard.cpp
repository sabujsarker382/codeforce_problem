#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<char>v = {};
		int B = 0 , b = 0;
		int n = s.size();
		for(int i = n-1;i >= 0;i--){
			if(s[i] == 'b') b++;
			else if(b > 0 && int(s[i]) > 90) b--;
			else if(s[i] == 'B') B++;
			else if(B > 0 && int(s[i]) <= 90) B--;
			else v.push_back(s[i]);
		}
		for(int i = v.size() - 1;i >= 0;i--) cout << v[i];
		cout << endl;
	}
}