#include<bits/stdc++.h>
using namespace std;
int main(){
int tst;
cin>>tst;
while(tst--){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(), a.end());
	long long res=0;
	unordered_map<long long, long long> m;
	for(int i=0;i<n-1;i++){
		m[a[i]]+=i;
		if(a[i]==a[i+1]){
			res+=m[a[i]];
		}
 
	}
	cout<<res<<endl;
}
}
       
