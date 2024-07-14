#include <stdio.h>
#include <stdlib.h>

main(){
	char name[20];
	scanf("%s", name);
	for(int i=0; name[i]!='\0'; i ++){    
		printf("%c", name[i]);
	}
}
