#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum=0; //�w�q�ܼ�sum=0 
	int x=1; //�w�q�ܼ�x=1
	while(x<=1024){ //��x<=1024 ���H�U�ʧ@ 
		sum = sum + x; //��s�ܼ�sum = sum+x
		x=x*2; //x=x*2
	}
	printf("%d",sum); //�L�Xsum
}
