#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //���c����  
struct listNode{
	char data[4];
	listPointer link;
};

main(){
	listPointer first = NULL; //�ŧi�@�Ӹ`�I 
	first = (listPointer)malloc(sizeof(*first)); //���t�`�I���O����Ŷ� 
	strcpy(first->data, "BAT"); //�N�`�I��Ƨ令BAT  
	first->link = NULL; //��`�I���s���]��0 
	printf("%s", first->data);
}
