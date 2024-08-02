#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //結構指標  
struct listNode{
	int data;
	listPointer link;
};

listPointer Create(){
	listPointer first, second, third;
	first = (listPointer)malloc(sizeof(*first));
	second = (listPointer)malloc(sizeof(*second));
	third = (listPointer)malloc(sizeof(*third));
	first->link = second;
	second->link = third;
	third->link = NULL;
	first->data = 10;
	second->data = 20;
	third->data = 30;
	
	return first;
}

void printList(listPointer first){
	printf("此清單包含：");
	for(; first; first = first->link){ //當first != NULL時 做完動作後 切到link指向的記憶體位址 
		printf("%4d", first->data);
	}
	printf("\n");
}

main(){
	listPointer first;
	first = Create();
	printList(first);
}
