#include <stdio.h>
#include <stdlib.h>
int strleng(char*);
void strcut(char*,int,int);
main(){
	char a[80];
	int start,end;
	printf("輸入字串：\n");
	scanf("%s", a);
	printf("輸入擷取起始結束：\n");
	scanf("%d%d", &start,&end);
	strcut(a,start,end); 
}
void strcut(char* a,int start,int end){
	char b[80];
	int leng = strleng(a);
	if(start>=leng || end>=leng || end<start){
		printf("ERR");
	}else{
		for(int i=0; start<=end; i++,start++){
			b[i] = a[start];
		}
		printf("%s", b);
	}
}
int strleng(char* a){
	int c;
    for(c=0; a[c]!='\0'; c++);
    return c;
} 

