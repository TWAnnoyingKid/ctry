#include <stdio.h>
#include <stdlib.h>
main(){
	int i=1, k=1, s=1;  //定義變數i=1,k=1,s=1 
	while(i<10){ //當i<10 做以下動作 
		while(k<10){ //當k<10 做以下動作 
			s = i*k; //更新變數s = i*k
			printf("%dx%d=%d\t",k,i,s); //印出 k x i = s 
			k++; //k=k+1
		}
		printf("\n"); // //內層迴圈跑完後換行 
		k=1; //將k重製為1 
		i++; //i=i+1
	}
}
