#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum=0, result;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
result=sum/n;
cout<<result<<endl;

}
