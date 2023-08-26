#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
     cin>>nums[i];
    }
    sort(nums,nums+n);
   for(int i=0;i<n;i++){
       if(nums[i]==nums[i+1]){
           count++;
        break;
       }
   }
   if(count==0){
       cout<<"false"<<endl;
   }
   else{
       cout<<"true"<<endl;
   }
}