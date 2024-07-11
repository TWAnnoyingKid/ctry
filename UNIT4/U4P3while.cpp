#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum=0; //定義變數sum=0 
	int x=1; //定義變數x=1
	while(x<=1024){ //當x<=1024 做以下動作 
		sum = sum + x; //更新變數sum = sum+x
		x=x*2; //x=x*2
	}
	printf("%d",sum); //印出sum
}
