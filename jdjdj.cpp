#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,count=0;
    cin>>t;
    while(t--){
            cin>>a>>b;
        int n=a%b;
    if(n==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<b-n<<endl;
    }

    }

     return 0;
}
