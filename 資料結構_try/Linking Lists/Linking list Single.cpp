#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode *listPointer; //���c����  
struct listNode{
	char data[4];
	listPointer link;
};

main(){
	listPointer k = NULL; //�ŧi�@�Ӹ`�I 
	k = (listPointer)malloc(sizeof(*k)); //���t�`�I���O����Ŷ� 
	strcpy(k->data, "BAT"); //�N�`�I��Ƨ令BAT  
	k->link = NULL; //��`�I���s���]��0 
	printf("%s", k->data);
}
