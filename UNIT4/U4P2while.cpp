#include <stdio.h> 
#include <stdlib.h> 

main(){
	int x,y,sum=1,i=1; //�w�q�ܼ�x,y,sum=1,i=1
	scanf("%d%d",&x,&y); //��J�ܼ�x,y 
	while(i<=y){s
		sum = sum * x;
		i++;
	}
	printf("%d",sum);
}
