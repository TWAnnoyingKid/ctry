#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
int top = -1; //初始陣列沒東西 位址為-1
int o = -1; //初始陣列沒東西 位址為-1

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

void Push(char item){
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

char getToken(char *symbol,int*n){
	*symbol = expr[(*n)++];
	switch(*symbol){
		case'(' : return 'Lparen';
		case')' : return 'Rparen';
		case'+' : return 'Plus';
		case'-' : return 'Minus';
		case'*' : return 'Times';
		case'/' : return 'Devide';
		case'%' : return 'Mod';
		case' ' : return 'Eos';
		default : return 'Operand';
	}
}

void Postfix(void){
	char *symbol;
	precedence token;
	int n=0, top=0;
	stack[0] = eos;
	for(token = getToken(&symbol, &n); token != Eos; token = getToken(&symbol, &n)){
		if(token == 'Operand'){
			printf("%c", symbol);
		}else if(token == 'Rparen'){
			while(stack[top] != 'Lparen'){
				printf("%c", Pop());
			} 
			Pop();
		}
	}
}

main(){
	char a[80]={'(','1','+','2',')','*','3'}, b[80], token ;
	
	
	
} 
