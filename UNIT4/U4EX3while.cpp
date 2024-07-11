#include <stdio.h> 
#include <stdlib.h> 

main(){
	int p = 1; //定義變數p=1
	int i = 1; //定義變數i=1
	while(i<=5){ //當i<=5 做以下動作 
		p = p * i;  //更新變數p=p*i 
		i++; //i=i+1 
	}
	printf("%d", p); //印出p 
}
