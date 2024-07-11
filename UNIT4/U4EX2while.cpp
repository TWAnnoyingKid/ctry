#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0; //定義變數sum=0
	int i = 1; //定義變數i=1
	while(i<=10){ //當變數i<=10 做以下動作 
		sum = sum + i;  //讓sum = sum+i 
		i++; //i=i+1
	}
	printf("%d", sum); //印出變數sum
}
