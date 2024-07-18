#include <stdio.h>
#include <stdlib.h>

void AND(char* a, char* b, char* c){
	for(int i=0; i<9; i++){
		c[i] = a[i]+b[i];
	}
}

main(){
    char a[9], b[9], c[9];
    int i;
    scanf("%s", a);
    scanf("%s", b);
    AND(a,b,c);
    for(int i=0 ; c[i]!='\0'; i++){
    	printf("%c", c[i]);
	}   
}

