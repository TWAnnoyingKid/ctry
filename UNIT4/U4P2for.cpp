#include <stdio.h> 
#include <stdlib.h> 

main(){
	int x,y,sum=1; //�w�q�ܼ�x,y,sum=1
	scanf("%d%d",&x,&y); //��J�ܼ�x,y 
	for(int i=1; i<=y; i++){  //�w�q�ܼ�i=1 ��i<=y i=i+1 
		sum = sum * x;  //��s�ܼ�sum = sum*x
	}
	printf("%d",sum); //�L�Xsum
}
