#include <stdio.h> 
#include <stdlib.h> 

main(){
	int a,b; //�w�q�ܼ�a,b 
	scanf("%d%d",&a,&b); //��J�ܼ�a,b 
	if(a>b){ //�p�Ga>b 
		printf("%d > %d\n",a,b); //�L�Xa>b 
	}else if(a<b){
		printf("%d < %d\n",a,b); //�L�Xa<b 
	}else{ //�p�G�W�z�Ҥ��ŦX 
		printf("%d = %d\n",a,b); //�L�Xa=b 
	}
}
