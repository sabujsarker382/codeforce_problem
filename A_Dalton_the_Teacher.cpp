#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            if(a==i){
                count++;
            }
        }
      if(count%2==0){
        cout<<count/2<<endl;
      }
      
      else{
        cout<<(count/2)+1<<endl;
      }
    }
}
