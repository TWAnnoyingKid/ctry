#include <stdio.h> 
#include <stdlib.h> 

main(){
	int a,b; //定義變數a,b 
	scanf("%d%d",&a,&b); //輸入變數a,b 
	if(a>b){ //如果a>b 
		printf("%d > %d\n",a,b); //印出a>b 
	}else if(a<b){
		printf("%d < %d\n",a,b); //印出a<b 
	}else{ //如果上述皆不符合 
		printf("%d = %d\n",a,b); //印出a=b 
	}
}
