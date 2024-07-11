#include <stdio.h> 
#include <stdlib.h> 

main(){
	int x,y,sum=1,i=1; //定義變數x,y,sum=1,i=1
	scanf("%d%d",&x,&y); //輸入變數x,y 
	while(i<=y){ //當i<=y 做以下動作 
		sum = sum * x; //更新變數sum = sum*x
		i++; //i=i+1 
	}
	printf("%d",sum); //印出sum
}
