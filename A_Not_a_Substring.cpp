#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
        int i=1;
        int l=s.length()+1;
       while(i!=l){
        if(s[i]=='(' && s[l]==')')cnt++;
        i++;l--;
       }
        cout<<l;
        cout<<cnt;
        if(cnt!=l/2){
          cout<<"YES"<<endl;
          for(int i=0;i<s.length();i++){
            cout<<"()";
          }
          cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}