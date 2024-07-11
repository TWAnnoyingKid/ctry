#include <stdio.h> 
#include <stdlib.h> 

main(){
	int p = 1; //定義變數p=1
	for(int i=1; i<=5; i++){  //定義變數i=1 當i<=5 i=i+1 
		p = p * i; //更新變數p=p*i
	}
	printf("%d", p); //印出p 
}
