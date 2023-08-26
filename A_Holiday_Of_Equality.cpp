#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,sum=0,mx=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    mx=max(mx,arr[i]);
}
int result=n*mx-sum;
cout<<result<<endl;


}