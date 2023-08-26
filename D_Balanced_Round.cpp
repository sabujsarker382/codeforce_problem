#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,count=1,res=1;
        cin>>n>>a;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=a){
                count++;
                res=max(res,count);
            }
            else{
                count=1;
            }
           
        }
     cout<<n-res<<endl;
        


}
}