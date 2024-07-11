#include <stdio.h> 
#include <stdlib.h> 

main(){
	int x,y,sum=1; //定義變數x,y,sum=1
	scanf("%d%d",&x,&y); //輸入變數x,y 
	for(int i=1; i<=y; i++){  //定義變數i=1 當i<=y i=i+1 
		sum = sum * x;  //更新變數sum = sum*x
	}
	printf("%d",sum); //印出sum
}
