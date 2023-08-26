#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
       
     while(n/10!=0){
        if(n%10>=5){
            n=n+(10-n%10);
        }
     }
      
      
       cout<<n;
    }
}