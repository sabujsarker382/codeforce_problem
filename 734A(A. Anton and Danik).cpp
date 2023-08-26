#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    int n,i,j=0,k=0;
    cin>>n;
     string str;
    cin>>str;

    for(i=0;i<n;i++){
        if(str[i]=='A'){
            j++;


        }
        else
             k++;

    }
    if(j>k)
        cout<<"Anton"<<endl;
         if(k>j)
        cout<<"Danik"<<endl;
         if(k==j)
        cout<<"Friendship"<<endl;

 return 0;
}
