#include <stdio.h> 
#include <stdlib.h> 

main(){
	int x,y,sum=1; //定義變數x,y,sum=1,i=1
	scanf("%d%d",&x,&y); //輸入變數x,y 
	for(int i=1; i<=y; i++){
		sum = sum * x;
	}
	printf("%d",sum);
}
