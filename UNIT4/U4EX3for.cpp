#include <stdio.h> 
#include <stdlib.h> 

main(){
	int p = 1;
	for(int i=1; i<=5; i++){
		p = p * i;
	}
	printf("%d", p);
}
