#include <stdio.h>
#include <stdlib.h>
int fact(int);
main(){
	int x;
	scanf("%d",&x);
	printf("%d! = %d\n",x,fact(x));
}
int fact(int n){
	if(n<=1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
