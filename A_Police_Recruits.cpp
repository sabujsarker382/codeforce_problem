#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sum=0;
    cin>>n;
   
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
       if(a+sum<0){
        count++;
       }
       else{
        sum=sum+a;
       }
       
    }
    
 cout<<count<<endl;


}