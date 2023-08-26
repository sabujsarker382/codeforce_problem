#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,even=0,odd=0;
    cin>>n;
    while(n--){
        int i;
        cin>>i;
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(even%2!=0 && odd%2!=0){
            cout<<"NO"<<endl;
        }
        else if(even%2==0 && odd%2!=0){
            cout<<"YES"<<endl;
        }
        else if{
            
        }
    }
}

}