//***JOY MA SAROSOTI***//
//Edited by : Sabuj Sarker_PSTU_CSE//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[30][30],b[30][30],c[30][30],i,j,sum=0,k,row1,row2,col1,col2;
    cin>>row1>>row2>>col1>>col2;
    if(col1!=row2){
            cout<<"There is a wrong_Input Again"<<endl;
        cin>>row1>>row2>>col1>>col2;
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The first array is:"<<endl;
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"The second array is:"<<endl;
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            for(k=0;k<col1;k++){
                sum=sum+a[i][k] * b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
 cout<<"The final array is:"<<endl;
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
