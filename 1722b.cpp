#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,k=0;
    cin>>n;
        string s,st;
        cin>>s>>st;
        for(int i=0;i<n;i++){
            if(s[i]==st[i] || (s[i]=='G'  && st[i] =='B') || (s[i]=='B'  && st[i] =='G') ){
                continue;
            }
            else{
                k++;
                break;
            }
        }
        if(k==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
