#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,m=0;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
       if(arr[i+1]-arr[i]>m){
        m=arr[i+1]-arr[i];
       }
    }
   // cout<<m;
    double x=arr[0];
    double y=(double)m/2;
    double ans=max(x,y);
    double z=l-arr[n-1];
    ans=max(z,ans);
    cout<<fixed<<setprecision(10)<<ans;
}