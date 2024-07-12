#include <stdio.h>
#include <stdlib.h>
main(){
	float sum=0,s=1,k=1;
	for(int i=1; i<=10; i++){
		k = (k*i);
		s = 1/k;
		printf("1/%d!\t = %.8f\n",i,s);
		sum = sum + s;
	}
	printf("%f\n", sum);
}

