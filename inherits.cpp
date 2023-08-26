#include<bits/stdc++.h>
#include<conio.h>
#include<fstream>
using namespace std;



int main(){

    string name;
  ofstream file;
  file.open("student.txt",ios::out|ios::app);
 cout<<"Input your name\n";
 getline(cin,name);
 file<<"welcome"<<name<<endl;
  file.close();

    getch();
}
