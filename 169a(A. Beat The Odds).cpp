#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a=0,b=0,c;
        for(int i=0;i<n;i++){
            cin>>c;
            if(c%2==0)a++;
            else
                b++;
        }
        cout<<n-max(a,b)<<endl;
    }






}
