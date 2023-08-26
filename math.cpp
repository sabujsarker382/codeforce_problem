#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cou=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cou++;
        }

    }
    if(cou==2){
        cout<<"this is a prime number ";
    }
    else{
        cout<<"the number is not prime";
    }
}
