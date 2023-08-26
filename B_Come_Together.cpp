#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        cout<<(abs(a-c)+abs(b-d)+1+abs(a-e)+abs(b-f)+1-abs(c-e)-abs(d-f))/2<<endl;
    }
}