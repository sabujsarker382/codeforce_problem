#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string c="codeforces";
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=c[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}