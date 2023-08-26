#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx=0,id=0;;
       
            for(int i=1;i<=n;i++){
               int a,b;
               cin>>a>>b;
               if(a<=10 &&  mx<b){
                    mx=b;
                    id=i;
               }
               
            }
            cout<<id<<endl;
        
       

    }
}