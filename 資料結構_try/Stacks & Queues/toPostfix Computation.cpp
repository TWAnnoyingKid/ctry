#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
int top = -1;

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

int getToken(char symbol){ //此函式返還抓到的字元 
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

int precedence(char symbol){ //此函式返還運算子的優先級數
	switch(symbol){
		case'+' :case'-' : 	return '1'; // +- 的優先級數 最低 
		case'*' :case'/' :	return '2'; // */ 的優先級數比 +- 的高 
	}
}


void Postfix(char* a, char* b){
	int o = -1;
	char s[MAX_STACK_SIZE]; //宣告一個堆疊 
	char temp;
	for(int i=0; getToken(a[i])!='0'; i++){
		switch(getToken(a[i])){
			case '(':	Push(a[i]);
						break;
							
			case ')':	while(stack[top] != '('){ //當堆疊內字元 !='(' 
							b[++o] = Pop(); //輸出堆疊內運算子至b內 
						} //結束迴圈後堆疊內最高字元會等於'(' 
						Pop(); //把'(' pop掉 
						break;
						
			case '+':	case '-':	case '*':	case '/':
							while(precedence(getToken(stack[top])) >= precedence(getToken(a[i])) ){ //當堆疊內運算子的優先級數比外部加入運算子的優先級數 高或相同時
								b[++o] = Pop(); //將堆疊內運算子 pop進b裡 
							}
							Push(a[i]); //再將外部加入運算子丟進堆疊 
							break;	
							
			case 'O': 	b[++o] = a[i]; //如果是數字或其他運算元就直接丟進b裡 
						break;
						
			default: 	printf("err");	
		}
	}
	while(!IsEmpty()){ //全域變數取消 
		b[++o] = Pop(); //當上面for迴圈做完 將stack裡所有東西一個個pop進b裡 
	}
}

int Eval(char* a){
	int op1=0, op2=0;
	for(int i=0; a[i]!='\0'; i++){
		if(getToken(a[i])=='O'){ //當a[i]為運算元 直接丟進堆疊
			Push(a[i]-'0'); // -'0'將字元變成整數 因'0'的ASCII值為48 '1'的ASCII值為49...49-48=1 
		}else{ //當a[i]為運算子 將堆疊最上面兩個數值做計算 再push進去 
			op2 = Pop(); 
			op1 = Pop();
			switch(getToken(a[i])){
				case '+': 	Push(op1 + op2); 
							break;
				case '-': 	Push(op1 - op2);
							break;
				case '*': 	Push(op1 * op2);
							break;
				case '/': 	Push(op1 / op2);
							break;
			}
		}
	}
	return Pop();
}

main(){
	char *a, b[] = { };
	a = (char *)malloc(100 * sizeof(char)); //動態分配100個字元的空間  
	printf("請輸入多項式：");
	scanf("%s", a);
	printf("中置式：");
	printf("%s\n" , a);
	
	Postfix(a,b);
	
	printf("後置式：");
	printf("%s\n" , b);
	
	printf("計算結果為%d", Eval(b));
}
