#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
} 
int main()
{
int n;
cin>>n;
vector<vector<int>>v;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    vector<int>temp;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}
// for(int i=0;i<n;i++){
//    for(int j=0;j<v.size();j++){
//   std::cout << v[j] << std::endl;
//    }
//    cout<<endl;
// }
for(int i=0;i<v.size();i++){
   for(int j=0;j<v[i].size;i++){
    cout<<v[j];
   }
}

 

}