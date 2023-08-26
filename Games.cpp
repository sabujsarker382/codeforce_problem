#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n],m[n],i,j,c=0;
    for( i=0;i<n;i++){
       cin>>h[i]>>m[i];
    }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
         if(i!=j  && h[i]==m[j])
        c++;

    }
   }
   cout<<c<<endl;


    return 0;
}
