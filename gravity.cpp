#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
       cin>> arr[i];
    }
   sort(arr,arr+n);
   for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}
