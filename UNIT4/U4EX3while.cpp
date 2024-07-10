#include <stdio.h> 
#include <stdlib.h> 

main(){
	int p = 1;
	int i = 1;
	while(i<=5){
		p = p * i;
		i++;
	}
	printf("%d", p);
}
