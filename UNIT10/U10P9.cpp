#include <stdio.h>
#include <stdlib.h>

struct string{
	char str[80];
};
typedef struct string STRING;

void strSort(STRING (*a), int n){
	int minp=0;
	for(int k=0; k<n; k++){
		for(int i=0; (a[k].str[i]!='\0')||(a[(k+1)].str[i]!='\0'); i++){
			if(a[(k)].str[i]<a[(k+1)].str[i]){
				minp = k;
				printf("%d\n", minp);
			}
		}
	}
	
}
main(){
	STRING a[5];
	for(int i=1; i<=5; i++){
		scanf("%s", a[i]);
	}
	strSort(a, 5);
}
