#include <stdio.h>
#include <stdlib.h>

struct string{
	char str[80];
};

typedef struct string STRING;

int strComp(STRING a, STRING b){
	for(int i=0; (a.str[i]!='\0')&&(b.str[i]!='\0'); i++){
		if(a.str[i]>b.str[i]){
			return 1;
		}else if(a.str[i]<b.str[i]){
			return -1;
		}else if(a.str[i]==b.str[i]){
			return 0;
		}
	}
}

main(){
	STRING a,b;
	scanf("%s%s", a,b);
	if(strComp(a,b)==1){
		printf("A > B");
	}else if(strComp(a,b)==0){
		printf("A = B");
	}else if(strComp(a,b)==(-1)){
		printf("A < B");
	}
}
