#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    long long int a,b,x=0,y=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
      
        x=x+c;
    }
    for(int i=0;i<b;i++){
        int d;
        cin>>d;
       
        y=y+d;
    }
    if(x==y){
        cout<<"Draw"<<endl;
    }
    if(x>y){
        cout<<"Tsondu"<<endl;
    }
    if(y>x){
        cout<<"Tenzing"<<endl;
    }
}

}