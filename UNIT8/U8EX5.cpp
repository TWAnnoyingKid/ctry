#include <stdio.h>
#include <stdlib.h>
int strleng(char*);
void strcopy(char*,char*);
main(){
	char a[80];
	char b[80];
	scanf("%s", a);
	strcopy(a, b);
}
void strcopy(char* a, char* b){
	int leng = strleng(a);
	for(int i=0; i<=leng; i++){
		b[i] = a[i];
	}
	printf("A= %s\nB= %s", a, b);
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 

