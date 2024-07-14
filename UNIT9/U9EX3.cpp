#include <stdio.h>
#include <stdlib.h>

main(){
	int* p;
	int a[5]={1,2,3,4,5}; //陣列為常數指標 
	p = a;
	for(int i=0; i<5; i++){
		printf("&a[%d] = %x, &a[%d] = %d\n",i,&a[i],i,a[i]);
	} 
	for(int i=0; i<5; i++){
		printf("%d  ", p[i]);
	} 
	printf("\np= %x\n", p);
	for(int i=0; i<5; i++,p++){
		printf("%d  ", *p);
	}
	printf("\np= %x\n", p);
}
