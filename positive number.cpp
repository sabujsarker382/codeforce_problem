#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        if((n-k)%2==0 && n>=(long long)k*k){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


}
