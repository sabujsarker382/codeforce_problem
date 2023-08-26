#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a*d==b*c){
            cout<<"0"<<endl;
            break;
        }
        if(a*b*c/b == a*c*d/d){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }

    }


    return 0;
}
