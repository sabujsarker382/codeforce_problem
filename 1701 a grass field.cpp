#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int a,b,c,d;
       cin>>a>>b;
       cin>>c>>d;
       if(a == 0 && b == 0 && c == 0 && d == 0){
        cout<<"0"<<endl;
       }
       else if(a == 1 && b == 1 && c == 1 && d == 1){
        cout<<"2"<<endl;
       }
       else{
        cout<<"1"<<endl;
       }
    }
    return 0;
}
