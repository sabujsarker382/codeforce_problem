#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d=0,e=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    a=0;
    b=n-1;
    c=0;
    while(a<=b){
        if(c%2==0){
          if(arr[a]>=arr[b]){
           
            d=d+arr[a];
            a++;
          }
          else{
            
            d=d+arr[b];
            b--;
          }
        }
        else{
             if(arr[a]>=arr[b]){
           
            e=e+arr[a];
             a++;
          }
          else{
             
            e=e+arr[b];
            b--;
          }
        }
        c++;
    }
    
  cout<<d<<" "<<e<<endl;

}