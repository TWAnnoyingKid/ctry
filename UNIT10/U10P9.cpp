#include <stdio.h>
#include <stdlib.h>

struct string{
	char str[80];
};
typedef struct string STRING;

int strComp(STRING a, STRING b){
	int i;
	for(i=0; (a.str[i]!='\0')&&(b.str[i]!='\0'); i++){ //當兩個[i]字元皆不為'\0' 
		if(a.str[i]>b.str[i]){
			return 1;
		}else if(a.str[i]<b.str[i]){
			return -1;
		}
	}
	if(a.str[i]==b.str[i]){
		return 0;
	}else if(a.str[i]<b.str[i]){
		return -1;
	}else{
		return 1;
	}
}

void strSort(STRING *a, int n){ //SELECTION SORT
	STRING temp, min=a[0];
	int minp=0;
	for(int k=0; k<n ; k++, minp=k, min=a[k]){
		for(int s=k; s<n; s++){
			if(strComp(a[s], min) == -1){
				min = a[s];
				minp = s;
			}
		}
		a[minp] = a[k];
		a[k] = min;
	}
}

main(){
	STRING a[5];
	for(int i=0; i<5; i++){
		printf("輸入第 %d 個字串：",(i+1));
		scanf("%s", a[i].str);
	}
	strSort(a,5);
	for(int i=0; i<5; i++){
		printf("%s ", a[i].str);
	}
}
