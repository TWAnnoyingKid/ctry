#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //結構指標  
struct listNode{
	int data;
	listPointer link;
};
listPointer top = NULL;

void printList(listPointer top){
	printf("此清單包含：");
	for(; top; top = top->link){ //當top != NULL時 做完動作後 切到link指向的記憶體位址 
		printf("%d  ", top->data);
	}
	printf("\n");
}

void Push(int item){
	listPointer node;
	node = (listPointer)malloc(sizeof(*node));
	node->data = item;
	node->link = NULL;
	if(!top){
		top = node;
	}else{
		node->link = top;
		top = node;
	}
}

int Pop(){
	int item;
	if(top){
		listPointer temp;
		temp = top;
		top = top->link;
		item = temp->data;
		free(temp);
		temp = NULL;
		return item;
	}
	printf("空了");
	return -1;
}

main(){
	Push(10);
	printList(top);
	Push(20);
	printList(top);
	Push(30);
	printList(top);
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
}
