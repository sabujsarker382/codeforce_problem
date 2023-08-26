#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,d,e,f,g,h;
    cin>>n;
    c=n/100;
    d=(n%100)/20;
    e=(n%20)/10;
    f=(n%10)/5;
    g=n%5;
    h=c+d+e+f+g;
    cout<<h<<endl;
    


}