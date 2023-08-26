#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int arr[n],arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
           arr1[i]=arr[i]%2;
           cout<<arr1[i]<<i;
        }
       
    }

}