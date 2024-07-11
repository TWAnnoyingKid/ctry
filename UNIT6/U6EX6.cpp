#include <stdio.h>
#include <stdlib.h>
void A(int*);
main(){
	int x=10;
	A(&x);
	printf("%d\n",x);
}
void A(int* x){
	*x = *x+1;
	printf("%d\n",*x);
}
