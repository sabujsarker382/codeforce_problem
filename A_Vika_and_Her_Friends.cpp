#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int c,d;
        cin>>c>>d;
        int count=0;
        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            if((c+d)%2==(a+b)%2){
            count++;
            }
        }
     if(count>0){
        cout<<"NO"<<endl;
     }else{
        cout<<"YES"<<endl;
     }
    }
   
}