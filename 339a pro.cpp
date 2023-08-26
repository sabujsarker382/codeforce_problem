#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string sum,new_sum;
    cin>>sum;

    for(int i=0;i<sum.size();i++){
        if(sum[i]!='+'){
            new_sum.push_back(sum[i]);
        }
    }
    sort(new_sum.begin(),new_sum.end());
    cout<<new_sum[0];
    for(int i=1;i<new_sum.length();i++){
        cout<<"+"<<new_sum[i];
    }

}
