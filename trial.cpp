#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    if(x>y || x>=h+y){
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}