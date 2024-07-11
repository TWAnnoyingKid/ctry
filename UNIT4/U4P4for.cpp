#include <stdio.h>
#include <stdlib.h>
main(){
	int s=1; //﹚竡跑计s=1
	for(int i=1; i<10; i++){  //﹚竡跑计砆计i=1 讽i<=10 i=i+1
		for(int k=1; k<10; k++){  //﹚竡跑计计k=1 讽k<=10 k=k+1
			s = i*k; //穝跑计s = i*k
			printf("%dx%d=%d\t",k,i,s); // k x i = s 
		}
		printf("\n"); //ず糷癹伴禲Ч传︽ 
	}
}

