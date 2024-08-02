#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //結構指標  
struct listNode{
	int data;
	listPointer link;
};
listPointer rear = NULL, front = NULL;

void printList(listPointer top){
	printf("此清單包含：");
	for(; top; top = top->link){
		printf("%d  ", top->data);
	}
	printf("\n");
}

void AddQ(int item){
	listPointer node,temp;
	node = (listPointer)malloc(sizeof(*node));
	node->data = item;
	node->link = NULL;
	if(!rear){
		rear = node;
		front = node;
	}else{
		rear->link = node;
		rear = node;
	}
	
}

int DeleteQ(){
	int item;
	if(front){
		listPointer temp;
		temp = front;
		front = front->link;
		item = temp->data;
		free(temp);
		temp = NULL;
		return item;
	}
	printf("空了");
	return -1;
}
 
main(){
	AddQ(10);
	AddQ(20);
	AddQ(30);
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
	AddQ(40);
	AddQ(50);
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
}
