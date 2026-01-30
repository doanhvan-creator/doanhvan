#include<stdio.h>
int main(){
	int n=0,du=0;
	scanf("%d",&n);
	while(n!=0){
		du=n%10;
		printf("%d",du);
		n=n/10;
	}
	return 0;
}