#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i, arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=1;i<n;i++){
            if((arr[i]==arr[i-1]) || arr[i]<arr[i-1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }


    return 0;
}
