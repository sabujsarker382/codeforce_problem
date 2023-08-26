#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
     int sum=0;
   while(i%3==0 || i%5==0 || i<100){

        sum=sum+i;
        i++;

    }

 cout<<sum<<endl;


}
