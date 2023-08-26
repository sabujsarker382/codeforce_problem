#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        int c=abs(n);
        int d=c%10;
        int e=c/10;
        int f=e%10;
        int g=e/10;
        if(f>d){
            cout<<-(g*10+d)<<endl;
           
        }
        else{
            cout<<-e<<endl;
        }
    }
}