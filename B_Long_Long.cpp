#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0,z=0;
        cin>>n;
        long long int ans=0;
       for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        ans=ans+abs(x);
        if(x<0 && z==0){
            z=1;
            c++;
        }else if(x>0){
            z=0;
        }
       }
        cout<<ans<<" "<<c<<endl;
    }
}