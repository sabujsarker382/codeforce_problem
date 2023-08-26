#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1;
    cin>>n>>m;
  // for(i=1;i*n%10!=0 && i*n%10!=m;i++){
   
  // }  
  while(i*n%10!=0 && i*n%10!=m){
    i++;
  }
   cout<<i<<endl;
}