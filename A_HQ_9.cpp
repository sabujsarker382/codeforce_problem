#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int count=0;
    for(int i=0;i<st.length();i++){
        if(st[i]=='H' || st[i]=='Q' || st[i]=='9'){
            count++;
        }
    }
    if(count>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}