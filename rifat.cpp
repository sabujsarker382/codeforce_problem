#include<bits/stdc++.h>
using namespace std;
class student{
public:
        int id;
        double gpa;
        void display(){
            cout<<id<<" "<<gpa<<endl;
        }
        student(int x,double y){
            id=x;
            gpa=y;
        }


};

int main(){

    student sabuj(12,3.46);
    sabuj.display();

}
