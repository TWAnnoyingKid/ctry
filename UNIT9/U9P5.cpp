#include <stdio.h>
#include <stdlib.h>
int strcomp(char* a, char* b){
	for(int i=0; (a[i]!='\0')||(b[i]!='\0'); i++){
		if(a[i]>b[i]){
			return 1;
		}else if(a[i]<b[i]){
			return -1;
		}
	}
}
main(){
	char *a,*b,*c;
	a = (char*)malloc(sizeof(char)*80);
	b = (char*)malloc(sizeof(char)*80);
	printf("¿é¤Ja¡G");
	scanf("%s",a);
	printf("¿é¤Jb¡G");
	scanf("%s",b);
	if(strcomp(a,b)==1){
		c=a;
	}else{
		c=b;
	}
	printf("%s",c);
} 
