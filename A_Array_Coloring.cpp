#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0,d=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2==0){
                c++;
            }
            else{
                d++;
            }
            
        }
        if(d%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}