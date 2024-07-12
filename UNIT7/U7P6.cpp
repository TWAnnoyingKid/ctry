#include <stdio.h>
#include <stdlib.h>

main(){
	int avg=0, a[3][3]={{-8,23,-12}, {23,-4,35}, {-9,54,38}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			avg = avg + a[i][j];
		}
	}
	avg = avg/9;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j] >= avg){
				a[i][j] = 1;
			}else{
				a[i][j] = 0;
			}
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
