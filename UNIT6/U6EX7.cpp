#include <stdio.h>
#include <stdlib.h>
int fact(int);
main(){
	printf("%d\n",fact(5));
}
int fact(int n){
	if(n<=1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
