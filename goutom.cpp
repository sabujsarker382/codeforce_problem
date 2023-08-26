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
        student()
        {
            cout<<"Default constructor"<<endl;
        }

};
int main()
{
    student od;
    student sabuj(12,3.22);
    sabuj.display();


}
