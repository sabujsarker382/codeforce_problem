#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a=0,b=0,c=0,d=0,e=0;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       if(n==5){
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                a++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='i'){
                b++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='m'){
                c++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='u'){
                d++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='r'){
                e++;
            }
        }
        if(a==1 && b==1 && c==1 && d==1 && e==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else{
        cout<<"No"<<endl;
       }

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;

        }


    return 0;
}

