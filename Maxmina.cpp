#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
            int n,k,x;
		cin>>n>>k;
		bool fg=false;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x==1)fg=true;
		}
		if(fg)puts("YES");
		else puts("NO");
	}
    return 0;
}


