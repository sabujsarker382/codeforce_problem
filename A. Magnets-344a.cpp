#include<iostream>
using namespace std;
int main()
{
    int a,count=1;
    cin>>a;

   int arr[a],i;
   for(i=0;i<a;i++){
    cin>>arr[i];
   }
   for(i=0;i<a-1;i++){
    if(arr[i]!=arr[i+1])
        count++;
   }
    cout<<count<<endl;

}
