#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n%7;
        int y=7-x;
        int xx=n%10;
        if(n%7==0)n=n;
        else if(xx+y<10)n+=y;
        else n-=x;
        cout<<n<<endl;

    }
}
