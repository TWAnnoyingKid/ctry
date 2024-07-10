#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;
	int i = 1;
	while(i<=20){
		switch(i%2){
			case 0: sum = sum + (i*(-3));
					i++;
					break;
			case 1: sum = sum + (i*3);
					i++;
					break;
			default: printf("ERROR\n");
		}
	}
	printf("%d", sum);
}
