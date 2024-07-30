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
	printf("err ���|�w�� �L�k�A�[�J����\n");
	exit(0);
}
int StackEmpty(){
	printf("err ���|�O�Ū�\n");
	return -1;
}

void Push(char item, int top){
	if(!IsFull(top)){
		stack[top] = item; //++n ->��+1�A�ʧ@  n++ ->���ʧ@�A+1  
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
	int o=-1, top=-1; //��l�}�C�S�F�� ��}��-1
	char temp;
	for(int i=0; getToken(a[i])!='0'; i++){
		switch(getToken(a[i])){
			case '(':	Push(a[i], ++top);
						break;
							
			case ')':	while(stack[top] != '('){ //��stack���r�� !='(' 
							b[++o] = Pop(top--); //��X�r����b�� 
						}//�����j��� stack(top)�|����'(' 
						Pop(top--);//��'(' pop�� 
						break;
						
			case '+': case '-':  //change �j�� 
							while(stack[top] == '*' || stack[top] == '/'){ //�� stack[top] == '/' �� =='*'�� 
								b[++o] = Pop(top--); //�]stack[top] pop�ib�� 
							}
							Push(a[i], ++top);
							break;	
						
			case '*': case '/':	 //change �j�� 
							while(stack[top] == '*' || stack[top] == '/'){ //�� stack[top] =='/' �� =='*'�� 
								b[++o] = Pop(top--); //���N stack[top] pop�hb�� 
								Push(a[i], ++top);//�A�N a[i](*��/)push�i�h 
							}
							Push(a[i], ++top);
							break;
							
			case 'O': 	b[++o] = a[i]; //�p�G�O�Ʀr�Ψ�L�B�⤸�N������ib�� 
						break;
						
			default: printf("err");					
		}
	}
	while(!IsEmpty(top)){ ///�����ܼƨ��� 
		b[++o] = Pop(top--); //��W��for�j�鰵�� �Nstack�̩Ҧ��F��@�ӭ�pop�ib�� 
	}
}

int Eval(char* a){
	int op1=0, op2=0, top=-1;
	for(int i=0; getToken(a[i])!='0'; i++){
		if(getToken(a[i])=='O'){
			Push(a[i]-'0', ++top); //-'0' �N�r���ܦ���� �]'0'��ASCII�Ȭ�48 '1'��ASCII�Ȭ�49...49-48=1 
		}else{
			op1 = Pop(top--);
			op2 = Pop(top--);
			switch(getToken(a[i])){ //��a[i]���B��l �Nstack�̤W����ӼƭȰ��p�� �Apush�i�h 
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
	printf("���m���G");
	printf("%s\n" , a);
	
	Postfix(a,b);
	
	printf("��m���G");
	printf("%s\n" , b);
	
	printf("�p�⵲�G��%d", Eval(b));
}
