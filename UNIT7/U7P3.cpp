#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int A[5]={23,45,5,19,30};
	int temp,minp,min;
	for(int i=0; i<5; i++){
		temp = A[i];
		min = A[i];
		minp = i;
		for(int k=i; k<5; k++){
			if(A[k]<min){
				min = A[k];
				minp= k;
			}
		}
		A[minp] = temp;
		A[i] = min;
		for(int s=0; s<5; s++){
			printf("%d\t",A[s]);
		}
		printf("\n");
	}
}
