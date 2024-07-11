#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum=0; //定義變數sum=0 
	for(int x=1; x<=1024; x=x*2){  //定義變數x=1 當x<=1024 x=x*2 
		sum = sum + x;  //更新變數sum = sum+x
	}
	printf("%d",sum); //印出sum
}
