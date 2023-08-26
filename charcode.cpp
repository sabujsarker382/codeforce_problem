#include<bits/stdc++.h>
#include<string>
using namespace std;
string change_letter(string str){

    int str_code;
    for(int x=0;x<str.length();x++){
        str_code=int(str[x]);
        if(str_code==122){
            str[x]=char(97);
        }
        else if(str_code==90){
            str[x]=char(65);
        }
        else if(str_code>=65 && str_code<=90 || str_code>=97 && str_code<=122){
            str[x]=char(str_code+1);
        }
    }
    return str;

}
int main()
{
	cout << "Original string: w3resource";
	cout << "\nNew string: " << change_letter("w3resource");
	cout << "\n\nOriginal string: Python";
	cout << "\nNew string: " << change_letter("Python");
	return 0;
}
