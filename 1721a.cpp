#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum=0;

    cin>>t;

    while(t--){

        string s, st;

        cin>>s;
        cin>>st;

        char sx[4];

        sx[0] = s[0];
        sx[1] = s[1];
        sx[2] = st[0];
        sx[3] = st[1];

        sort(sx, sx+sizeof(sx));

        for(int j=0; j<3; j++){
            if(sx[j]==sx[j+1]){
                sum = sum + 1;
            }
        }

        if(sum == 0){
            cout<<3<<endl;
        }else if(sum == 1){
            cout<<2<<endl;
        }else if(sum == 2){
            cout<<1<<endl;
        }else if(sum == 3){
            cout<<0<<endl;
        }

        sum = 0;

    }

    return 0;
}
