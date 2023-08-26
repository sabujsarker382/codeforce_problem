#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=acos((b*b+c*c-a*a)/(2*b*c));
    y=acos((a*a+c*c-b*b)/(2*a*c));
    z=acos((b*b+a*a-c*c)/(2*b*a));
    cout<<x<<endl;
     cout<<y<<endl;
      cout<<z<<endl;
}

