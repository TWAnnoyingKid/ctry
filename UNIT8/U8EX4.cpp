#include <stdio.h>
#include <stdlib.h>
int strleng(char*a);
main(){
	char a[80];
	int c;
	scanf("%s", a);
	printf("string length=%d\n", strleng(a));
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 

