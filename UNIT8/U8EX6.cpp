#include <stdio.h>
#include <stdlib.h>
int strleng(char*);
void strcat(char*,char*);
main(){
	char a[80];
	char b[80];
	scanf("%s%s", a, b);
	strcat(a, b);
}
void strcat(char*a ,char*b){
	int leng = strleng(a);
	for(int i=0,temp; b[i]!='\0'; i++){
		temp=leng+i;
		a[temp]=b[i];
	}
	printf("%s", a);
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 
