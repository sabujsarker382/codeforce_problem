#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>s;
        int i=1;
        while(i*i<=n)
        {
            s.insert(i*i);
            i++;
        }
        i=1;
        while(i*i*i<=n){
            s.insert(i*i*i);
            i++;
        }
        cout<<s.size()<<endl;
    }

}
