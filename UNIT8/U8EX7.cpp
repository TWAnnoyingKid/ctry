#include <stdio.h>
#include <stdlib.h>
int strleng(char*);
void strrev(char*);
main(){
	char a[80];
	scanf("%s", a);
	strrev(a);
	
}
void strrev(char*a){
	char b[80];
	int leng = strleng(a);
	for(int i=0; i<=leng; i++){
		b[i] = a[i];
	}
	for(int i=1; i<=leng; i++){
		a[(leng-i)] = b[(i-1)];
	}
	printf("%s", a);
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 
