#include <stdio.h>
#include <stdlib.h>

#define Max 6
main(){
	int bubble[Max]={23,78,45,8,32,56}, temp;
	for(int i=0; i<Max-1; i++){
		for(int k=Max-1; k>=i; k--){
			if(bubble[k] < bubble[k-1]){
				temp = bubble[k];
				bubble[k] = bubble[k-1];
				bubble[k-1] = temp;
			}
		}
		for(int j=0; j<Max; j++){
			printf("%d ", bubble[j]);
		}
		printf("\n");
	}
	
}
