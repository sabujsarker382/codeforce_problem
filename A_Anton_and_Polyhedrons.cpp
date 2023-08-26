#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Icosahedron"){
            count=count+20;
        }if(s=="Cube"){
            count=count+6;
        }if(s=="Tetrahedron"){
            count=count+4;
        }if(s=="Dodecahedron"){
            count=count+12;
        }if(s=="Octahedron"){
            count=count+8;
        }
       
       
       
    }
    cout<<count<<endl;
    
}