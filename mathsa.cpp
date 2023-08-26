#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,result;
        cin>>n;
        int i, arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<n;i++){
            result=(arr[n-1]-arr[0]) +(arr[n-2]-arr[1]);
        }
        cout<<result<<endl;
    }

    return 0;
}
