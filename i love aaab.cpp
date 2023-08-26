#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')
            a++;
        else
            b++;
        if(b>a){
            ans=1;

            break;
        }
    }
    if(s[0]=='B' || ans==1|| s[s.size()-1]!='B')
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    }

}
