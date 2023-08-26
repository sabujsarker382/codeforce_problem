#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,sum=0,k=0;
    cin >>n;
    for(i=0;i<n;i++){
        for(i=0;i<n;i++){
            cin>>a>>b;
            sum=(a+k)-b;
            if(sum<0)
                k=0;
            else
                k=sum;
        }
        cout<<sum;
    }


}
