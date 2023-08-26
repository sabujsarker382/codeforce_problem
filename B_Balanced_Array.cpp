#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    if((a/2)%2==0){
        int sum1=0,sum2=0,sum;
        cout<<"YES"<<endl;
        for(int i=1;i<=a/2;i++){
            cout<<i*2<<" ";
            sum1=sum1+i*2;
        }
        for(int i=1;i<a/2;i++){
            cout<<i*2-1<<" ";
            sum2=sum2+i*2-1;
        }
       
        sum=sum1-sum2;
        cout<<sum;
        cout<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
  
}

}