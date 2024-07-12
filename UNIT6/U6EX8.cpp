#include <stdio.h>
#include <stdlib.h>
int sum(int);
main(){
	int x;
	scanf("%d",&x);
	printf("%d\n",sum(x));
}
int sum(int n){
	if(n<=1){
		return 1;
	}else{
		return n+sum(n-1);
	}
}
