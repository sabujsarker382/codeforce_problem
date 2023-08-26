#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        int a=arr[0],count=0;
        for(int i=1;i<4;i++){
            if(arr[0]<arr[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}