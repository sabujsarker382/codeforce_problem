#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double s,a,b,c,area;
    cin>> a>>b>>c;
    s=a+b+c;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area<<endl;
    double x;
    x=2*acos(-1.)*b;
    cout<<x;


}
