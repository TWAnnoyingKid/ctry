#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum;
	for(int x=1; x<=1024; x=x*2){
		sum = sum + x;
	}
	printf("%d",sum);
}
