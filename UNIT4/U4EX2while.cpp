#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0; //�w�q�ܼ�sum=1
	int i = 1; //�w�q�ܼ�i=1
	while(i<=10){ //���ܼ�i<=10 ���H�U�ʧ@ 
		sum = sum + i; 
		i++; //i=i+1
	}
	printf("%d", sum); //�L�X�ܼ�sum
}
