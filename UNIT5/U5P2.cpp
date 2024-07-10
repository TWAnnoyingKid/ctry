#include <stdio.h>
#include <stdlib.h>
main(){
	float sum,s,k=1;
	for(int i=1; i<=10; i++){
		k = (k*i);
		s = 1/k;
//		printf("%.10f\n", s);
		sum = sum + s;
	}
	printf("%f\n", sum);
}

