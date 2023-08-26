#include<iostream>
using namespace std;
int main()

{
    int i,arr[10],arr1[10],n,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(j=0;j<n;j++){
        cin>>arr1[j];
    }
    for(i=0;i<n;i++){
        cout<<" "<<arr[i] + arr1[j];
    }

    return 0;
}

