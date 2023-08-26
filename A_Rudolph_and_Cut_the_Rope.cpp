#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s=0;
        cin>>n;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x>y)s++;
        }
        cout<<s<<endl;
    }
}