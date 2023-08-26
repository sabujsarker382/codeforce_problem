#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
     int n,mx=1,a=1;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0 && n%(i+1)==0){

            a++;
            i++;
            mx=max(mx,a);
           
           
        }
    }
    cout<<mx<<endl;
}

}