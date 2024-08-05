#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode *treePointer; //結構指標  
struct treeNode{
	int data;
	treePointer Left;
	treePointer Right;
};

void Preorder(treePointer ptr){ //前序尋訪 
	if(ptr){
		printf("%d", ptr->data);
		Preorder(ptr->Left);
		Preorder(ptr->Right);
	}
}

void Inorder(treePointer ptr){ //中序尋訪 
	if(ptr){
		Inorder(ptr->Left);
		printf("%d", ptr->data);
		Inorder(ptr->Right);
	}
}

void Postorder(treePointer ptr){ //後序尋訪 
	if(ptr){
		Postorder(ptr->Left);
		Postorder(ptr->Right);
		printf("%d", ptr->data);
	}
}

main(){
	treePointer A, B, C, D, E;
	A = (treePointer)malloc(sizeof(*A));
	A = NULL;
	A->data = 35;
	
	B = (treePointer)malloc(sizeof(*B));
	B = NULL;
	B->data = 46;
	
	C = (treePointer)malloc(sizeof(*C));
	C = NULL;
	C->data = 20;
	
	D = (treePointer)malloc(sizeof(*D));
	D = NULL;
	D->data = 27;
	
	E = (treePointer)malloc(sizeof(*E));
	E = NULL;
	E->data = 38;
	
	A->Left = C;
	A->Right = B;
	C->Right = D;
	B->Left = E;
	treePointer root;
	root = A;
	printf("前序\n");
	Preorder(root);
	printf("\n");
	printf("中序\n");
	Inorder(root);
	printf("\n");
	printf("後序\n");
	Postorder(root);
	printf("\n");
}






























