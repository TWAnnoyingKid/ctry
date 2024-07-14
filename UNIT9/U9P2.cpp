#include <stdio.h>
#include <stdlib.h>

void sort(int*, int);
main(){
	int* p;
	int a[6]={12, 35, 24, -6, 19, -10};
	p = a;
	sort(p,6);
	for(int i=0; i<6; i++,p++){
		printf("%d ",*p);
	}
}
void sort(int* a, int n){
	int temp,min, minp;
	for(int k=0; k<n; k++){
		temp = a[k];
		min = a[k];
		for(int i=k; i<n; i++){
			if(a[i]< min){
				min = a[i];
				minp = i;
			}
		}
		a[minp] = temp;
		a[k] = min;
	}
}
