#include <stdio.h>
#include <stdlib.h>

main(){
	int n; 
	double* a; 
	scanf("%d", &n);
	printf("BYTE NO= %d\n", (sizeof(double)*n));
	a = (double*)malloc(sizeof(double)*n);
	
	for(int i=0;i<=n;i++){
		a[i] =i;
		printf("a[%x] = %f\n", &a[i], a[i]);
	}
}
