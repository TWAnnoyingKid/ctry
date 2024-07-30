#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];

bool IsEmpty(int top){
	if(top == -1){
		return true;
	}return false;
}
bool IsFull(int top){
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

void Push(char item, int top){
	if(!IsFull(top)){
		stack[top] = item; //++n ->先+1再動作  n++ ->先動作再+1  
	}else{
		StackFull();
	}
}
int Pop(int top){
	if(!IsEmpty(top)){
		return stack[top];
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
void Postfix(char* a, char* b){
	int o=-1, top=-1; //初始陣列沒東西 位址為-1
	char temp;
	for(int i=0; getToken(a[i])!='0'; i++){
		switch(getToken(a[i])){
			case '(':	Push(a[i], ++top);
						break;
							
			case ')':	while(stack[top] != '('){ //當stack內字元 !='(' 
							b[++o] = Pop(top--); //輸出字元至b內 
						}//結束迴圈後 stack(top)會等於'(' 
						Pop(top--);//把'(' pop掉 
						break;
						
			case '+': case '-':  //change 迴圈 
							while(stack[top] == '*' || stack[top] == '/'){ //當 stack[top] == '/' 或 =='*'時 
								b[++o] = Pop(top--); //設stack[top] pop進b裡 
							}
							Push(a[i], ++top);
							break;	
						
			case '*': case '/':	 //change 迴圈 
							while(stack[top] == '*' || stack[top] == '/'){ //當 stack[top] =='/' 或 =='*'時 
								b[++o] = Pop(top--); //先將 stack[top] pop去b裡 
								Push(a[i], ++top);//再將 a[i](*或/)push進去 
							}
							Push(a[i], ++top);
							break;
							
			case 'O': 	b[++o] = a[i]; //如果是數字或其他運算元就直接丟進b裡 
						break;
						
			default: printf("err");					
		}
	}
	while(!IsEmpty(top)){ ///全域變數取消 
		b[++o] = Pop(top--); //當上面for迴圈做完 將stack裡所有東西一個個pop進b裡 
	}
}

int Eval(char* a){
	int op1=0, op2=0, top=-1;
	for(int i=0; getToken(a[i])!='0'; i++){
		if(getToken(a[i])=='O'){
			Push(a[i]-'0', ++top); //-'0' 將字元變成整數 因'0'的ASCII值為48 '1'的ASCII值為49...49-48=1 
		}else{
			op1 = Pop(top--);
			op2 = Pop(top--);
			switch(getToken(a[i])){ //當a[i]為運算子 將stack最上面兩個數值做計算 再push進去 
				case '+': 	Push(op1 + op2, ++top); 
							break;
				case '-': 	Push(op2 - op1, ++top);
							break;
				case '*': 	Push(op1 * op2, ++top);
							break;
				case '/': 	Push(op2 / op1, ++top);
							break;
			}
		}
	}
	return Pop(top--);
}

main(){
	char *a = "(1+2)*3+4*5-6*2", b[] = { };
	printf("中置式：");
	printf("%s\n" , a);
	
	Postfix(a,b);
	
	printf("後置式：");
	printf("%s\n" , b);
	
	printf("計算結果為%d", Eval(b));
}
