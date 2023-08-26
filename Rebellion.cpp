#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
    int a[n];
		int cnt=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0)cnt++;
		}
		int ans=0;
		for(int i=0;i<cnt;i++){
			if(a[i]==1)ans++;
		}
		cout<<ans<<endl;
	}
}
