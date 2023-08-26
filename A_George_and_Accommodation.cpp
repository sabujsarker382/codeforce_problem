#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    pair<int,int>r[100];
    for(int i=0;i<n;i++){
        cin>>r[i].first>>r[i].second;
    }
    for(int i=0;i<n;i++){
         if(r[i].second-r[i].first>=2){
            count++;
         }
        
    }
    cout<<count<<endl;

}