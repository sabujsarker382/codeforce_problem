#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1){
            cout<<"0"<<endl;
        }
       else{
        cout<<min(n,m)+n+m-2<<endl;
       }
        }



 return 0;
}
