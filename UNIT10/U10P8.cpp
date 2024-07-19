#include <stdio.h>
#include <stdlib.h>

struct string{
	char str[80];
};
typedef struct string STRING;

int strComp(STRING a, STRING b){
	for(int i=0; (a.str[i]!='\0')||(b.str[i]!='\0'); i++){
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
	scanf("%s%s", a.str,b.str);
	switch(strComp(a,b)){
		case 1:
			printf("A > B");
			break;
		case -1:
			printf("A < B");
			break;
		case 0:
			printf("A = B");
			break;
		default:
			printf("err");
	}
}
