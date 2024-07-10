#include <stdio.h>
#include <stdlib.h>
main(){
	for(int i=1; i<10; i++){
		for(int k=1; k<10; k++){
			int s = i*k;
			printf("%dx%d=%d\t",k,i,s);
		}
		printf("\n");
	}
}

