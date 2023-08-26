#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }if(n==2){
            cout<<2<<" "<<1<<endl;
        }else if(n>2){
           vector<int>ans(n,-1);
           ans[0]=3;
           ans[n/2]=1;
           ans[n-1]=2;
           int cnt=4;
           for(int i=0;i<n;i++){
            if(ans[i]!=-1)continue;
                ans[i]=cnt++;
           }
           for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
           }
           cout<<endl;

           
        }
    }
}