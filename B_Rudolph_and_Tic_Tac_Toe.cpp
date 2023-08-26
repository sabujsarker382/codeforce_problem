#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       char str[6][6];
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>str[i][j];
        }
       }
       int cnt=0;
       string s="";
       for(int i=0; i<3; i++){
        for(int j=0; j<3-2; j++){
            if(i == j){
                if(str[i][j] == 'X' or str[i][j] == '+' or str[i][j] == 'O'){
                    cnt++;
                    s += str[i][j];
                    break;
                }
            }
            else{
                if((str[i][j] == 'X' or str[i][j+1] == 'X' or str[i][j+2] == 'X') or
                 (str[i][j] == 'O' or str[i][j+1] == 'O' or str[i][j+2] == 'O') or
                 (str[i][j] == '+' or str[i][j+1] == '+' or str[i][j+2] == '+') ){
                    cnt++;
                    s += str[i][j];
                    break;
                }
            }
        }
       } 
       if(cnt)cout << s << "\n";
       else cout << "DRAW\n";
        s.clear();

    }
    
   

}