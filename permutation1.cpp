#include<cstdio>
#include<iostream>
using namespace std;
int t,a;
int main(){

	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		for (int i=2;i<=a;i++)
			printf("%d ",i);
		printf("1\n");
	}
}

