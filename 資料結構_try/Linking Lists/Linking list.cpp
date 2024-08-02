#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //���c����  
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
	printf("���M��]�t�G");
	for(; first; first = first->link){ //��first != NULL�� �����ʧ@�� ����link���V���O�����} 
		printf("%4d", first->data);
	}
	printf("\n");
}

main(){
	listPointer first;
	first = Create();
	printList(first);
}
