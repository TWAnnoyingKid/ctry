#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1; //��l�}�C�S�F�� ��}��-1

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
	printf("err ���|�w�� �L�k�A�[�J����\n");
	exit(0);
}
int StackEmpty(){
	printf("err ���|�O�Ū�\n");
	return -1;
}

void Push(int item){
	if(!IsFull()){
		stack[++top] = item; //++n ->��+1�A�ʧ@  n++ ->���ʧ@�A+1  
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
