#include <stdio.h>
#include <stdlib.h>
long fact(int);
main(){
	int n;
	scanf("%d",&n);
	printf("%d! = %d\n",n,fact(n));
}
long fact(int x){
	int sum=1;
	for(int i=1; i<=x; i++){
		sum = sum*i;
	}
	return sum;
}
