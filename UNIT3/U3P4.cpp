#include <stdio.h> 
#include <stdlib.h> 

main(){
	int n; //�w�q�ܼ�n 
	scanf("%d",&n); //��J�ܼ�n 
	switch(n%2){ //��(n%2)��switch 
		case 0: printf("%d is an even number\n", n); //��l�Ƭ�0 �L�X���� 
				break;
		case 1: printf("%d is an odd number\n", n); //��l�Ƭ�1 �L�X�_�� 
				break;
		default: printf("ERROR\n", n); //�Y����L���G ���error 
	}
	
}
