#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    c=a;
   while(a>=b){
    c=c+a/b;
    a=(a/b)+(a%b);
   }
   cout<<c<<endl;
   
}