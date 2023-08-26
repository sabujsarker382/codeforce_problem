#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s=s+a[i];
    }

    j=s/4;
    if(s%4==0)
        cout<<j<<endl;
    else if(s%4!=0){
        cout<<j+1<<endl;
    }

}
