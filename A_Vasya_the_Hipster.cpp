#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=min({a,b});
    int d=abs(a-b);
    int e=d/2;
    cout<<c<<" "<<e<<endl;
}