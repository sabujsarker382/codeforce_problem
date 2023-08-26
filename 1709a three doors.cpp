#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(n==1 && (a==2 && b==3)||(a==3 && c==2) ){
            cout<<"YES"<<endl;
        }
        else if(n=2 && (b==1 && a==3) ||(b==3 && c==1)){
            cout<<"YES"<<endl;
        }
        else if(n=3 &&(c==2 && b==1)||(c==1 && a==2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
