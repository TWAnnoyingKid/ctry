#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //���c����  
struct listNode{
	int data;
	listPointer link;
};
listPointer top = NULL;

void printList(listPointer top){
	printf("���M��]�t�G");
	for(; top; top = top->link){ //��top != NULL�� �����ʧ@�� ����link���V���O�����} 
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
	printf("�ŤF");
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
