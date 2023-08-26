#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,i;
        cin>>a;
        int arr[a],c=0,brr[a];
        for(i=0;i<a;i++){
            cin>>arr[i];
           
            c=max(c,arr[i]);
            
        }
        for(int i=0;i<a;i++){
            brr[i]=arr[i];
        }
        int d=0;
        sort(arr,arr+a);
    for(int i=0;i<a;i++){
      if(arr[i]!=brr[i]){
        d=max(d,brr[i]);
      }
    }
    cout<<d<<endl;
    }

}