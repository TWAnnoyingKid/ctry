#include <stdio.h>
#include <stdlib.h>
int strleng(char*);
void strtrans(char*);
main(){
	char a[80];
	printf("��J�G�i��r��G\n");
	scanf("%s", a);
	strtrans(a);
}
void strtrans(char* a){
	int leng = strleng(a), n=0;
	for(int i=0; i<leng; i++){
		if(a[i] == '1'){
			n=(n*2)+1;
		}else if(a[i] == '0'){
			n=(n*2);
		}else{
			printf("err");
		}
	}
	printf("�ഫ��G%d", n);
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 
