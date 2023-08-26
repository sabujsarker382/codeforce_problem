#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,r,solve=0;
    cin>>m>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr,arr+n);
   r=arr[n-1]-arr[0];
   for(int i=m;i<=n;i++){
    solve=arr[i-1]-arr[i-m];
    solve=abs(solve);
    r=min(r,solve);
   }

 cout<<r<<endl;


}