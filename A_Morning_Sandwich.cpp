#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int d=b+c;
    
    if(a<=d){
        cout<<a*2-1<<endl;
    }
    else{
        cout<<d*2+1<<endl;
    }

}

}