#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for( ; ;){
            a++;
            int b=a/1000;
            int c=(a/100)%10;
            int d=(a/10)%10;
            int e=(a%10);
            if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e){
                break;
            }

    }
    cout<<a;



}
