#include <stdio.h> 
#include <stdlib.h> 

main(){
	int x,y,sum=1,i=1; //�w�q�ܼ�x,y,sum=1,i=1
	scanf("%d%d",&x,&y); //��J�ܼ�x,y 
	while(i<=y){ //��i<=y ���H�U�ʧ@ 
		sum = sum * x; //��s�ܼ�sum = sum*x
		i++; //i=i+1 
	}
	printf("%d",sum); //�L�Xsum
}
