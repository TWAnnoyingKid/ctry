#include <stdio.h>
#include <stdlib.h>
main(){
	int i=1, k=1, s;
	while(i<10){
		while(k<10){
			s = i*k;
			printf("%dx%d=%d\t",k,i,s);
			k++;
		}
		printf("\n");
		k=1;
		i++;
	}
}
