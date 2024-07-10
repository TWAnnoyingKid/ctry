#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum=0;
	int x=1;
	while(x<=1024){
		sum = sum + x;
		x=x*2;
	}
	printf("%d",sum);
}
