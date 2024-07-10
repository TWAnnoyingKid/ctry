#include <stdio.h> 
#include <stdlib.h> 

main(){
	int n; //定義變數n 
	scanf("%d",&n); //輸入變數n 
	if(n>=90){
		printf("A\n");
	}else if(n>=80 && n<=89) {
		printf("B\n");
	}else if(n>=70 && n<=79) {
		printf("C\n");
	}else if(n>=60 && n<=69) {
		printf("D\n");
	}else{
		printf("F\n");
	}
}
