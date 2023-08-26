#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--){
    int n,ans;
    cin>>n;
    string a;
    cin>>a;
    vector<int>suf(n,0),pre(n,0);
    set<char>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
        pre[i]=s.size();
    }
    s.clear();
    for(int i=n-1;i>-1;i--){
        s.insert(a[i]);
        suf[i]=s.size();
    }
ans=0;
for(int i=0;i<n-1;i++){
    ans=max(ans,pre[i]+suf[i+1]);
}
cout<<ans<<endl;
   }
}