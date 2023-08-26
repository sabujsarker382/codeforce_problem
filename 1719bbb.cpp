#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
      if(k%2==1){
          for(int i=1;i<=n;i++){
                if(((i+k)*(i+1))%4==0){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;

            }
             i=i+1;
        }
      }
      else{
        for(int i=1;i<=n;i++){
                if(((i+k)*(i+1))%4==0){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;

            }
             i=i+1;
        }
      }
    }

    return 0;
}
