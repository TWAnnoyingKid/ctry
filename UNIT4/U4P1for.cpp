#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;  //�w�q�ܼ�sum=1
	for(int i=1; i<=20; i++){  //�w�q�ܼ�i=1 ��i<=20 i=i+1 
		switch(i%2){ //��switch�P�_i�l2 
			case 0: sum = sum + (i*(-3)); //��i���󰸼� ��s�ܼ�sum = sum+(-3i) 
					break;
			case 1: sum = sum + (i*3); //��i����_�� ��s�ܼ�sum = sum+3i
					break;
			default: printf("ERROR\n");
		}
	}
	printf("%d", sum); //�L�Xsum
}
