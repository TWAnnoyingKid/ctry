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

char getToken(char symbol){
	switch(symbol){
		case'(' : return '(';
		case')' : return ')';
		case'+' : return '+';
		case'-' : return '-';
		case'*' : return '*';
		case'/' : return '/';
		case'%' : return '%';
		case'\0' : return '0';
		default : return 'O';
	}
}

main(){
	char a[160]={'(','1','+','2',')','*','3','+','4','*','5'}, b[80], token ;
	for(int i=0; getToken(a[i])!='0'; i++){
		switch(getToken(a[i])){
			case '(':	Push(a[i]);
							break;
							
			case ')':	while(stack[top] != '('){ //當stack內字元 !='(' 
							b[++o] = Pop(); //輸出字元至b內 
						}//結束迴圈後 stack(top)會等於'(' 
						Pop();//把'(' pop掉 
						break;
						
			case '+': case '-':
							if(stack[top] == '*' || stack[top] == '/'){ //當 stack[top] == '/' 或 =='*'時 
								token = stack[top];//設token為 stack[top]
								Pop();//先pop掉最上面 
								Push(a[i]);//將 a[i](+或-)push進去 
								Push(token);//再將 token(*或/)push進去 s
							}else{//如果不是就直接push進去 
								Push(a[i]);	
							}
							break;	
						
			case '*': case '/':	
							if(stack[top] == '*' || stack[top] == '/'){ //當 stack[top] =='/' 或 =='*'時 
								b[++o] = Pop();//先將 stack[top] pop去b裡 
								Push(a[i]);//再將 a[i](*或/)push進去 
							}else{//如果不是就直接push進去 
								Push(a[i]);
							}
							break;
							
			case 'O': 	b[++o] = a[i]; //如果是數字或其他運算元就直接丟進b裡 
						if(stack[top] == '*' || stack[top] == '/'){//當 stack[top] =='/' 或 =='*'時 
							b[++o] = Pop();//將 stack[top] pop去b裡 
						}
						break;
						
			default: printf("err");					
		}
	}
	while(!IsEmpty()){
		b[++o] = Pop();//當上面for迴圈做完 將stack裡所有東西一個個pop進b裡 
	}
	
	for(int i=0; b[i]!='\0'; i++){
		printf("%c" , b[i]);
	}
}
