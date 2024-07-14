#include <stdio.h>
#include <stdlib.h>

void madd(int,int,int*);
main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[2][3]={{10,20,30},{40,50,60}};
	int c[2][3];
	madd(a[2][3], b[2][3], &c[2][3]);
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("%d  ", c[i][j]);
		}
		printf("\n");
	}
}
void madd(int a[2][3], int b[2][3], int* c[2][3]){
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			*c[i][j] = a[i][j] + b[i][j];
		}
	}
}

