#include <stdio.h>
#include <stdlib.h>

main(){
	int a[3][3]={{3,30,12}, {0,15,7}, {0,8,6}};
	int b[3]={99,8,1};
	int c[3],sum=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			sum = sum + a[i][j]*b[j] ;
		}
		c[i] = sum;
		printf("%d\t", sum);
		sum = 0;
	}
}
