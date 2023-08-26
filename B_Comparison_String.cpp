#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    string s;
    cin>>s;
    int solve=0,cnt=1;
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1])cnt=1;
        else
        cnt++;
        solve=max(solve,cnt);
    }
    cout<<solve+1<<endl;
   }
}