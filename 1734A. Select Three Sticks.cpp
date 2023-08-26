#include<bits/stdc++.h>
using namespace std;
long long a[330];
long long b[330];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
            cin>>a[i];
		sort(a+1,a+1+n);
		for(int i=1;i<n-1;i++){
			b[i]=a[i+2]-a[i];
		}
		sort(b+1,b+n-1);
		cout<<b[1]<<endl;
	}
	return 0;
}
