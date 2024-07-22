#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

void sort(int* list, int n){
	int i, j, min, temp;
	for(i=0; i<n; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(list[j] < list[min]){
				min = j;
			}
		}
		SWAP(list[i], list[min], temp);
	}
}
main(){
	int i,n;
	int list[MAX_SIZE];
	printf("��J�n�ͦ��X�ӼƦr�G");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		list[i] = rand()%1000;
		printf("%d ",list[i]);
	}
	sort(list, n);
	printf("\nSorted array�G\n");
	for(i=0; i<n; i++){
		printf("%d ",list[i]);
	}
	printf("\n");
}
