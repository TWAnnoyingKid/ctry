#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	printf("偽隨機數\n");
	for(int i=0; i<10; i++){
		printf("%d\n", rand());
	} 
	printf("\n隨機數\n");
	srand(time(NULL)); //time(NULL)函式是得到一個從1900年1月1日到現在的時間秒數
	for(int i=0; i<10; i++){
		printf("%d\n", rand());
	}
} 
