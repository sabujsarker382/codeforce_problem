#include<bits/stdc++.h>
using namespace std;
int t,n,ans[200005];
int num(int x){
	int a=0;
	while(x){
		a+=x%10;
		x/=10;
	}
	return a;
}
void solve(){
	cin>>n;
	cout<<ans[n]<<endl;
 
}
int main(){
	for(int i=1;i<=2e5;i++){
		ans[i]=ans[i-1]+num(i);
	}
	cin>>t;
	while(t--){
		solve();
	}
} 