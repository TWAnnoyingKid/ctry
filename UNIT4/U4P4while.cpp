#include <stdio.h>
#include <stdlib.h>
main(){
	int i=1, k=1, s=1;  //�w�q�ܼ�i=1,k=1,s=1 
	while(i<10){ //��i<10 ���H�U�ʧ@ 
		while(k<10){ //��k<10 ���H�U�ʧ@ 
			s = i*k; //��s�ܼ�s = i*k
			printf("%dx%d=%d\t",k,i,s); //�L�X k x i = s 
			k++; //k=k+1
		}
		printf("\n"); // //���h�j��]���ᴫ�� 
		k=1; //�Nk���s��1 
		i++; //i=i+1
	}
}
