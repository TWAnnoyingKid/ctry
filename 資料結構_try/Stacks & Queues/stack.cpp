#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1; //初始陣列沒東西 位址為-1

bool IsEmpty(){
	if(top == -1){
		return true;
	}return false;
}
bool IsFull(){
	if(top >= (MAX_STACK_SIZE-1)){
		return true;
	}return false;
}
	
void StackFull(){
	printf("err 推疊已滿 無法再加入元素\n");
	exit(0);
}
int StackEmpty(){
	printf("err 推疊是空的\n");
	return -1;
}

void Push(int item){
	if(!IsFull()){
		stack[++top] = item; //++n ->先+1再動作  n++ ->先動作再+1  
	}else{
		StackFull();
	}
}
	
int Pop(){
	if(!IsEmpty()){
		return stack[top--];
	}
	return StackEmpty();
}

main(){
	Push(10);
	Push(20);
	Push(30);
	Pop(); 
	Push(40);
	printf("%d\n",Pop());
	printf("%d\n",Pop());
	printf("%d\n",Pop());
	Pop(); 
}
