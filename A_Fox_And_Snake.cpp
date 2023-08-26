#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,i,j;
   cin>>a>>b;
    for(i=1;i<=a;i++){
        if(i%2==1){
         for(j=0;j<b;j++){
            cout<<"#";
        }
       
        }
         if(i%2==0 && (i/2)%2==1){
            for(j=0;j<b-1;j++){
                cout<<'.';
            }
            cout<<"#";

        }
        if(i%2==0 &&(i/2)%2!=1){
            cout<<"#";
             for(j=0;j<b-1;j++){
                cout<<'.';
            }
        }
        

       
        cout<<endl;

    }
}