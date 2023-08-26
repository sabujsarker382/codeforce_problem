#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    cin>>t>>l;

    while(t--){
        int w,h;
        cin>>w>>h;
        if(w==l && h==l)
            cout<<"Accepted"<<endl;
        else if((w==l && h<l) ||( h==l && w<l))
            cout<<"Try another one"<<endl;
        else
            cout<<"Crop it"<<endl;
    }




}
