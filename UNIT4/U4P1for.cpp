#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;
	for(int i=1; i<=20; i++){
		switch(i%2){
			case 0: sum = sum + (i*(-3));
					break;
			case 1: sum = sum + (i*3);
					break;
			default: printf("ERROR\n");
		}
	}
	printf("%d", sum);
}
