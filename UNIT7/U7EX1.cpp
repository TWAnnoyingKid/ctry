#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	printf("���H����\n");
	for(int i=0; i<10; i++){
		printf("%d\n", rand());
	} 
	printf("\n�H����\n");
	srand(time(NULL)); //time(NULL)�禡�O�o��@�ӱq1900�~1��1���{�b���ɶ����
	for(int i=0; i<10; i++){
		printf("%d\n", rand());
	}
} 
