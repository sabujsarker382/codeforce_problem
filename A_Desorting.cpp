#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,a,b,mn=1e9;
       cin>>n>>a;
       for(int i=1;i<n;i++){
        cin>>b;
        mn=min(mn,b-a);
        a=b;
       }
if(mn<0){
    cout<<0<<endl;
}else{
    cout<<mn/2+1<<endl;
}
        
}
}