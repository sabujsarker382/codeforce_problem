#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    if(a%400==0){
         cout<<"The number is leap year"<<endl;
    }
    else if(a%100==0){
        cout<<"The number is lea[p year]"<<endl;
    }
    else if(a%4==0){
        cout<< "the number is leap year"<<endl;
    }
    else
    {

    cout<<"The number is not leap year"<<endl;
    }



}
