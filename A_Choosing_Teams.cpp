#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,count=0,result;
cin>>n>>a;
while(n--){
    int b;
    cin>>b;
    if(5-b>=a){
        count++;
    }
}
result=count/3;
cout<<result<<endl;

}