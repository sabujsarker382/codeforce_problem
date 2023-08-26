#include<iostream>
using namespace std;
int main()
{
    int X=0;
    int t;
    cin>>t;
    string s;
    while(t){
        cin>>s;
        if(s=="++X" || s=="X++"){
            X++;
        }else{
            X--;
        }
        t--;
    }
    cout<<X;

    return 0;
}
