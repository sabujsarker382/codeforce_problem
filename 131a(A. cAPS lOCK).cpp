#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    string str;
    cin>>str;
    for(i=1;i<str.size();i++){
        if(islower(str[i]))
            c++;
    }
    if(islower(str[0]) && c==0){
        str[0]=toupper(str[0]);
        for(i=1;i<str.size();i++){
            str[i]=islower(str[i]);
        }
        cout<<str;
    }


    return 0;
}
