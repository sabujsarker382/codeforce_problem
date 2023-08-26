#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
	cin>>t;
	while(t--)
	{
	  long long n;
	  cin>>n;
	  long long sum=0;
	  long long mn0=1e9;
	  long long mn1=1e9;
 for(int i=0;i<n;i++){
    int s;
    cin>>s;
    vector<long long>v(s);
    for(int i=0;i<s;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    sum=sum+v[1];
    mn0=min(mn0,v[0]);
    mn1=min(mn1,v[1]);
 }
 
	  cout<<sum-mn1+mn0<<endl;
	}
}