#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       int ans=0;
       int p=n+1,q=n+1;
       for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(p>q) swap(p,q);
        if(a<=p)p=a;
        else if(a<=q)q=a;
        else
        p=a,ans++;
       }
       cout<<ans<<endl;
    }

}