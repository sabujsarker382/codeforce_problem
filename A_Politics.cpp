#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,cnt=1;
        cin>>a>>b;
        string st[a];
        for(int i=0;i<a;i++){
           cin>>st[i];
           
        }
       for(int i=0;i<a;i++){
        if(st[0]==st[i+1]){
            cnt++;
        }
       }
       cout<<cnt<<endl;
    }
}