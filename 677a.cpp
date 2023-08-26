#include<iostream>
using namespace std;
int main()
{
    int n,h,i,sum=0,sum1=0;
    cin>>n>>h;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]<=h)
            sum=sum+1;
        else
            if(arr[i]>h)
            sum1=sum1+2;
    }
    cout<<sum + sum1<<endl;


}
