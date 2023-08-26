#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,j,i;
        long long int sum=0;
        cin>>n>>j;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            sum=sum+arr[i];
        }

        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
