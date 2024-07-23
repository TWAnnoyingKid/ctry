#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
int sum=0;
void perm(char *list, int i, int n){
	int j, temp;
	if(i==n){
		for(j=0; j<=n; j++){
			printf("%c", list[j]);
			sum++;
		}
		printf("\n");
	}else{
		for(j=i; j<=n; j++){
			SWAP(list[i],list[j],temp);
			perm(list, i+1, n);
			SWAP(list[i],list[j],temp);
		}
	}
}
main(){
	char list[]={'a','b','c','d','e'};
	perm(list, 0, 2);
	printf("%d",(sum/3));
}
