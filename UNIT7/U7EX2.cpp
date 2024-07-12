#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int a[10], sum;
	srand(time(NULL));
	for(int i=0; i<10; i++){
		a[i] = rand()%100;
		printf("%d\n", a[i]);
		sum = sum+a[i];
	}
	printf("Á`©M = %d\n", sum);
}
