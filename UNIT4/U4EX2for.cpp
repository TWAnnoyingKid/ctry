#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;  //定義變數sum=0
	for(int i=1; i<=10; i++){  //定義變數i=0 當i<=10 i=i+1 
		sum = sum + i; //讓sum = sum+i 
	}
	printf("%d", sum); //印出sum 
}
