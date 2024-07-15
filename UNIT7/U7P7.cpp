#include <stdio.h>
#include <stdlib.h>

main(){
	int s = 0, b[5][5], a[5][5]={{0,0,0,0,1},{0,1,1,0,0},{0,0,0,1,0},{0,1,0,0,0},{0,0,1,0,1}};
	printf("A¡G\n");
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", a[i][j]);
		}
		printf("%\n");
	}
	printf("\nB¡G\n");
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			for(int k=(i-1); k<=(i+1) && k<5; k++){
				if(k<0){
					k = 0;
				}
				if ((j-1)>0){
					s = s + a[k][j] + a[k][(j-1)] + a[k][(j+1)] ;
				}else{
					s = s + a[k][j] + a[k][(j+1)] ;
				}
				
			}
			b[i][j] = s;
			s = 0;
			printf("%d ", b[i][j]);
		}
		printf("%\n");
	}
}
