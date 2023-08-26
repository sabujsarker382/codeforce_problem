#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],arr2[100],n,arr3[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);

    }
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr[i]+arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr3<<endl;
    }

}
