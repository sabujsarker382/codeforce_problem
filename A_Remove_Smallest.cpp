#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])>1){
                count=1;
                cout<<"NO"<<endl;
                break;
                
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
       
        
    }
}
