#include <stdio.h>
#include <stdlib.h>
int strleng(char*);
void strcut(char*,char*,int);
main(){
	char a[160];
	char b[160];
	int start;
	printf("輸入字串：\n");
	scanf("%s%s", a, b);
	printf("輸入從何插入：\n");
	scanf("%d", &start);
	strcut(a,b,start); 
}
void strcut(char* a,char* b,int start){
	int leng = strleng(a)+strleng(b);
	int lengb = strleng(b);
	if(start>strleng(a)){
		printf("err");
	}else{
		for(int i=lengb,k=start,c=0; strleng(a)<(leng); i++,k++,c++ ){
			b[i] = a[k];
			a[k] = b[c];
		}
		printf("\n%s", a);
	}
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 
