#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    if(x > y - n*(n-1)/2){
      cout<<"-1\n";
    }
    else{
      cout<<x<<" ";
      for(int i=n-2; i>=0; i--){
        cout<<y - i*(i+1)/2<<" "; 
      }
      cout<<endl;
    }
  }
}