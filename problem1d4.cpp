#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string text="codeforces";
       char c;
       cin>>c;
       auto isFound = text.find(c);
       if(isFound != string::npos){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }


}
