#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

main(){
	float x=0, s=0, sum=0, a[10] = {81,66,12,7,6,4,30,1,2,77};
	for(int i=0; i<10; i++){
		x = x + a[i];
	}
	x=x/10;
	for(int i=0; i<10; i++){
		s = s + (a[i] - x)*(a[i] - x);
	}
	s=sqrt(s/10);
	printf("¥­§¡­È = %.2f\n¼Ð·Ç®t = %f\n", x,s);
}
