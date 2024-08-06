#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode *treePointer; //結構指標  
struct treeNode{
	int data;
	treePointer Left;
	treePointer Right;
};

void Preorder(treePointer ptr){ //前序尋訪 
	if(ptr){
		printf("%d\n", ptr->data);
		Preorder(ptr->Left); 
		Preorder(ptr->Right);
	}
}

void Inorder(treePointer ptr){ //中序尋訪 
	if(ptr){
		Inorder(ptr->Left);
		printf("%d\n", ptr->data);
		Inorder(ptr->Right);
	}
}

void Postorder(treePointer ptr){ //後序尋訪 
	if(ptr){
		Postorder(ptr->Left);
		Postorder(ptr->Right);
		printf("%d\n", ptr->data);
	}
}
//樹二分搜尋法 左子節會小於右子節 
int* iterSearch(treePointer root, int k){ //迴圈樹狀二分搜尋法 
	while(root){
		if(k == root->data){
			return &(root->data);
		}else if(k > root->data){
			root = root->Right;
		}else{
			root = root->Left;
		}
	} 
	return NULL;
}

int* search(treePointer root, int k){ //遞迴樹狀二分搜尋法    
	if(!root){
		return NULL;
	}
	
	if(k == root->data){
		return &(root->data);
	}else if(k > root->data){
		search(root->Right, k);
	}else{
		search(root->Left, k);
	}
}

void insertBStree(treePointer* root, treePointer node){ 
	if(!(*root)){
		*root = node;
	}else if(node->data > (*root)->data){
		insertBStree(&((*root)->Right), node);
	}else{
		insertBStree(&((*root)->Left), node);
	}
}

main(){
	treePointer A, B, C, D, E;
	int* p;
	A = (treePointer)malloc(sizeof(*A));
	A->data = 35;
	A->Right = NULL;
	A->Left = NULL;
	
	B = (treePointer)malloc(sizeof(*B));
	B->data = 46;
	B->Right = NULL;
	B->Left = NULL;
	
	C = (treePointer)malloc(sizeof(*C));
	C->data = 20;
	C->Right = NULL;
	C->Left = NULL;
	
	D = (treePointer)malloc(sizeof(*D));
	D->data = 27;
	D->Right = NULL;
	D->Left = NULL;
	
	E = (treePointer)malloc(sizeof(*E));
	E->data = 38;
	E->Right = NULL;
	E->Left = NULL;
	
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
	
	p = search(root, 27);
	printf("%p\t%d\n", p, *p);
	
	p = iterSearch(root, 35);
	printf("%p\t%d\n", p, *p);
	
	p = iterSearch(root, 100);
	(p)? printf("%p\t%d\n", p, *p):
	printf("找不到\n"); 
	
	treePointer BTree;
	BTree = NULL;
	insertBStree(&BTree, E);
	insertBStree(&BTree, D);
	insertBStree(&BTree, C);
	insertBStree(&BTree, A);
	insertBStree(&BTree, B);
	
	printf("中序\n");
	Inorder(BTree);
	printf("\n");
	
}

