#include <stdio.h> 
#include <stdlib.h> 

main(){
	int p = 1; //�w�q�ܼ�p=1
	int i = 1; //�w�q�ܼ�i=1
	while(i<=5){ //��i<=5 ���H�U�ʧ@ 
		p = p * i;  //��s�ܼ�p=p*i 
		i++; //i=i+1 
	}
	printf("%d", p); //�L�Xp 
}
