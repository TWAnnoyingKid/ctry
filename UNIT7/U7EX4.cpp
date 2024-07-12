#include <stdio.h>
#include <stdlib.h>

main(){
	int a[3][3]={{2,6,8}, {5,11,0}, {20,12,1}};
	int b[3][3]={{100,50,7}, {2,9,13}, {6,10,81}};
	int c[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
