#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>reg;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(reg[s]==0){
            reg[s]=1;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
  

}

