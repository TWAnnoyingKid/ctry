#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;  //�w�q�ܼ�sum=1
	int i = 1;  //�w�q�ܼ�i=1
	while(i<=20){ //��i<=20 ���H�U�ʧ@ 
		switch(i%2){ //��switch�P�_i�l2 
			case 0: sum = sum + (i*(-3)); //��i���󰸼� ��s�ܼ�sum = sum+(-3i)
					i++; //i = i+1
					break;
			case 1: sum = sum + (i*3); //��i����_�� ��s�ܼ�sum = sum+3i
					i++; //i = i+1
					break;
			default: printf("ERROR\n");
		}
	}
	printf("%d", sum); //�L�Xsum
}
