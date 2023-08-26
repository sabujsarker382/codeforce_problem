#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
vector<int>a,b;
 if(arr[0]==arr[n-1]){
        cout<<-1<<endl;  
    }
    else{
for(int i=0;i<n;i++){
   
    if(arr[n-1]==arr[i]){
        a.push_back(arr[i]);
    }
    else{
        b.push_back(arr[i]);
    }
}
cout<<b.size()<<" "<<a.size()<<endl;
for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
}cout<<endl;
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}cout<<endl;
    }


    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     vector<int>a,b;
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     int cnt=0;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]/arr[0]==1)cnt++;
    //     }
    //   if(cnt==n){
    //     cout<<-1<<endl;
    //   }
    //   else{
    //    for(int i=0;i<n;i++){
    //     if(arr[i]==1){
    //         a.push_back(arr[i]);
    //     }else{
    //         b.push_back(arr[i]);
    //     }
    //    }
    //    cout<<a.size()<<" "<<b.size()<<endl;
    //    for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    //    }
    //    cout<<endl;
    //     for(int i=0;i<b.size();i++){
    //     cout<<b[i]<<" ";
    //    }
       
     
    }
}