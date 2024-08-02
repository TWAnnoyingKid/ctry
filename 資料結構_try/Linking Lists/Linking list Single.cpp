#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //結構指標  
struct listNode{
	char data[4];
	listPointer link;
};

main(){
	listPointer first = NULL; //宣告一個節點 
	first = (listPointer)malloc(sizeof(*first)); //分配節點的記憶體空間 
	strcpy(first->data, "BAT"); //將節點資料改成BAT  
	first->link = NULL; //把節點的連結設為0 
	printf("%s", first->data);
}
