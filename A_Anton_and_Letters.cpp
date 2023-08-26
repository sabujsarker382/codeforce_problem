#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set<char>a;
   vector<char> a;
    char c;
    
    while(cin>>c){
        if(isalpha(c)){
           a.push_back(c);
        }
    }
    // for(auto it=a.begin();it!=a.end();++it){
    //     cout<<*it<<endl;
    // }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    vector<char>::iterator it;
    it=std::unique(a.);
    cout<<a.size();

}