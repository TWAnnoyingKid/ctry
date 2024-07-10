#include <stdio.h> 
#include <stdlib.h> 

main(){
	int n; //定義變數n 
	scanf("%d",&n); //輸入變數n 
	switch(n%2){ //用(n%2)做switch 
		case 0: printf("%d is an even number\n", n); //當餘數為0 印出偶數 
				break;
		case 1: printf("%d is an odd number\n", n); //當餘數為1 印出奇數 
				break;
		default: printf("ERROR\n", n); //若有其他結果 顯示error 
	}
	
}
