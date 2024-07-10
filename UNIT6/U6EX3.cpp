#include <stdio.h>
#include <stdlib.h>
int fact(int);
main(){
	int n;
	scanf("%d",&n);
	printf("%d! = %d",n,fact(n));
}
int fact(int a){
	int p,i;
	for(p=1,i=1; i<=a; i++){
		p=p*i;
	}
	return p;
}
