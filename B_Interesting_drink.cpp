// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int m;
//     cin>>m;
//     for(int i=0;i<m;i++){
//         int a,count=0;
//         cin>>a;
//         for(int i=0;i<n;i++){
//             if(a>=arr[i]){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
       cout<< upper_bound(arr,arr+n,a)-arr<<endl;

    }

}