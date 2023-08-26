#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x;
    cin>>n>>m>>a>>b;
    if(a==b && m<=1){
        cout<<n*a<<endl;
       
    }
    else if(n<m && n*a>b){
        cout<<b<<endl;

    }
    else if(m*a>b)
    {
        x=((n/m)*b+min({a*(n-(n/m)*m),b}));
        cout<<x<<endl;
    }
    else{
        x=n*a;
        cout<<x<<endl;
    }
}