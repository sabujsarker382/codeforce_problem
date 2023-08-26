#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<n;i++)
       {
        if(s[i]=='Q')a++;
        else
            {
                a--;
                if(a<=0)a=0;
            }
        }
    if(a)cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
}
}
