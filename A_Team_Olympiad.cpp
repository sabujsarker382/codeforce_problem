#include<bits/stdc++.h>
using namespace std;

int main()
{
//     int arr1[50001];
// int arr2[50001];
// int arr3[50001];
//     int size;
//     cin>>size;
//     int a1=0,a2=0,a3=0;
//     for(int i=1;i<=size;i++){
//         int num;
//        cin>>num;//1,2,3,4,5,6;
//        if(num==1){
//         arr1[a1]=i;
//         a1++;
//        }
//       else if(num==2){
//         arr2[a2]=i;
//         a2++;
//        }
//       else if(num==3){
//         arr3[a3]=i;
//         a3++;
//        }
//     }
//     int x=min(a1,min(a2,a3));
//     cout<<x<<endl;
//     for(int i=0;i<x;i++){
//         cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
//     }
int arr1[50001],arr2[50001],arr3[50001];
int n;
cin>>n;
int a1=0,a2=0,a3=0;
for(int i=1;i<=n;i++){
int num;
cin>>num;
if(num==1){
    arr1[a1]=i;
    a1++;
}
else if(num==2){
    arr2[a2]=i;
    a2++;
}else if(num=3){
    arr3[a3]=i;
    a3++;
}

}
int s=min(a1,min(a2,a3));
cout<<s<<endl;
for(int i=0;i<s;i++){
    cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
}







}