#include <stdio.h> 
#include <stdlib.h> 

main(){
	int p = 1; //�w�q�ܼ�p=1
	for(int i=1; i<=5; i++){  //�w�q�ܼ�i=1 ��i<=5 i=i+1 
		p = p * i; //��s�ܼ�p=p*i
	}
	printf("%d", p); //�L�Xp 
}
