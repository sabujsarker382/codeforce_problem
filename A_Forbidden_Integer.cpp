#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
         cin>>n>>m>>k;
		if(k!=1){
			cout<<"YES\n";
			cout<<n<<'\n';
			for(int i=1;i<=n;i++) 
            cout<<1<<" ";
			cout << '\n';
		}
		else if((n%2 && m==2) || m==1) cout<<"NO\n";
		else{
			cout<<"YES\n";
			cout<<n/2<<'\n';
			for(int i=1;i<n/2;i++) cout<<2<<" ";
			cout<<2+(n%2)<<'\n';
		}
	}
}