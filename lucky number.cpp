#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    if(s%4==0 || s%7==0 || s%44==0 || s%47==0 || s%74==0 || s%77==0 || s%444==0 || s%447==0 || s%474==0 ||
        s%744==0 || s%477==0 || s%747==0 || s%774==0 || s%777==0)
   {
       cout<<"YES";
   }
   else
    cout<<"NO";

    return 0;
}
