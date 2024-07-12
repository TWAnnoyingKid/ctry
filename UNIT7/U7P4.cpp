#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int i,n,t, A[16];
	scanf("%d", &n);
	for(i=1; i<=16; i++){
		A[i]=(n%2);
		n = n/2;
		printf("%d",A[i]);
	}
}
