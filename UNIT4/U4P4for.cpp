#include <stdio.h>
#include <stdlib.h>
main(){
	int s=1; //�w�q�ܼ�s=1
	for(int i=1; i<10; i++){  //�w�q�ܼƳQ����i=1 ��i<=10 i=i+1
		for(int k=1; k<10; k++){  //�w�q�ܼƭ���k=1 ��k<=10 k=k+1
			s = i*k; //��s�ܼ�s = i*k
			printf("%dx%d=%d\t",k,i,s); //�L�X k x i = s 
		}
		printf("\n"); //���h�j��]���ᴫ�� 
	}
}

