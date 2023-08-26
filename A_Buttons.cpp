#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
        }else{
            if(b>a){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }
    }
}


