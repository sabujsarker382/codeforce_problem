#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,d,x,distance;
    cin>>a>>b>>c>>d;
    distance=sqrt(pow((a-c),2)+ pow((b-d),2));
    cout<<distance;


}
