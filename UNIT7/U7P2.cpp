#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int A[5]={23,45,5,19,30};
	int temp=A[0],min=A[0],minp;
	for(int i=1; i<5; i++){
		if(A[i]<min){
			min = A[i];
			minp = i;
		}
	}
	A[minp] = temp;
	A[0] = min;
	for(int i=0; i<5; i++){
		printf("%d ",A[i]);
	}
}
