#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode *treePointer; //���c����  
struct treeNode{
	char *data;
	treePointer Left;
	treePointer Right;
};

void Preorder(treePointer ptr){ //�e�ǴM�X 
	if(ptr){
		printf("%s\n", ptr->data);
		Preorder(ptr->Left);
		Preorder(ptr->Right);
	}
}

void Inorder(treePointer ptr){ //���ǴM�X 
	if(ptr){
		Inorder(ptr->Left);
		printf("%s\n", ptr->data);
		Inorder(ptr->Right);
	}
}

void Postorder(treePointer ptr){ //��ǴM�X 
	if(ptr){
		Postorder(ptr->Left);
		Postorder(ptr->Right);
		printf("%s\n", ptr->data);
	}
}

main(){
	treePointer A, B, C, D, E;
	A = (treePointer)malloc(sizeof(*A));
	A->data = "A";
	A->Right = NULL;
	A->Left = NULL;
	
	B = (treePointer)malloc(sizeof(*B));
	B->data = "B";
	B->Right = NULL;
	B->Left = NULL;
	
	C = (treePointer)malloc(sizeof(*C));
	C->data = "C";
	C->Right = NULL;
	C->Left = NULL;
	
	D = (treePointer)malloc(sizeof(*D));
	D->data = "D";
	D->Right = NULL;
	D->Left = NULL;
	
	E = (treePointer)malloc(sizeof(*E));
	E->data = "E";
	E->Right = NULL;
	E->Left = NULL;
	
	A->Left = C;
	A->Right = B;
	C->Right = D;
	B->Left = E;
	treePointer root;
	root = A;
	
	printf("�e��\n");
	Preorder(root);
	printf("\n");
	printf("����\n");
	Inorder(root);
	printf("\n");
	printf("���\n");
	Postorder(root);
	printf("\n");
}

