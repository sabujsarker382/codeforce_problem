#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
    cin >>n;
    int a=(n-3)/3;
    n=n-a;
    int b=(n-1)/2;
    n=n+a;
    cout<<b<<" "<<n-a-b<<" "<<a<<endl;

}
}
