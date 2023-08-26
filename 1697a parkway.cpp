#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,sum=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(m>=sum){
            cout<<"0"<<endl;
        }
        else{
            cout<<sum-m<<endl;
        }
        sum=0;
    }

    return 0;
}
