#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,t;
    int i,j;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(s==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
