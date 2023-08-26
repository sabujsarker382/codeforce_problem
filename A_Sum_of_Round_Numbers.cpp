#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
   
    while(t--){
        vector<int>num;
       
       cin>>n;
       int i=10;
      while(n){
        if(n%i!=0){
            num.push_back(n%i);
            n-=(n%i);
        }
            i*=10;
        
         }
      cout<<num.size()<<endl;
       for(auto it:num){
         cout<<it<<" ";
       
      }
      cout<<endl;
     
    }
    
}