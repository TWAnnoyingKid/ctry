#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
int top = -1; //��l�}�C�S�F�� ��}��-1
int o = -1; //��l�}�C�S�F�� ��}��-1

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

void Push(char item){
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
	char a[] = "(1+2)*3+4*5+6", b[80] = { }, token ;
	//Infix to Postfix
	for(int i=0; getToken(a[i])!='0'; i++){
		switch(getToken(a[i])){
			case '(':	Push(a[i]);
							break;
							
			case ')':	while(stack[top] != '('){ //��stack���r�� !='(' 
							b[++o] = Pop(); //��X�r����b�� 
						}//�����j��� stack(top)�|����'(' 
						Pop();//��'(' pop�� 
						break;
						
			case '+': case '-':
							if(stack[top] == '*' || stack[top] == '/'){ //�� stack[top] == '/' �� =='*'�� 
								token = Pop();//�]token�� stack[top]
								Push(a[i]);//�N a[i](+��-)push�i�h 
								Push(token);//�A�N token(*��/)push�i�h s
							}else{//�p�G���O�N����push�i�h 
								Push(a[i]);	
							}
							break;	
						
			case '*': case '/':	
							if(stack[top] == '*' || stack[top] == '/'){ //�� stack[top] =='/' �� =='*'�� 
								b[++o] = Pop();//���N stack[top] pop�hb�� 
								Push(a[i]);//�A�N a[i](*��/)push�i�h 
							}else{//�p�G���O�N����push�i�h 
								Push(a[i]);
							}
							break;
							
			case 'O': 	b[++o] = a[i]; //�p�G�O�Ʀr�Ψ�L�B�⤸�N������ib�� 
						if(stack[top] == '*' || stack[top] == '/'){//�� stack[top] =='/' �� =='*'�� 
							b[++o] = Pop();//�N stack[top] pop�hb�� 
						}
						break;
						
			default: printf("err");					
		}
	}
	while(!IsEmpty()){
		b[++o] = Pop();//��W��for�j�鰵�� �Nstack�̩Ҧ��F��@�ӭ�pop�ib�� 
	}
	
	printf("���m���G");
	printf("%s\n" , a);
	
	printf("��m���G");
	printf("%s\n" , b);
	
	//Postfix Computation
	int op1=0, op2=0;
	for(int i=0; getToken(b[i])!='0'; i++){
		if(getToken(b[i])=='O'){
			Push(b[i]-'0'); //-'0' �N�r���ܦ���� �]'0'��ASCII�Ȭ�48 '1'��ASCII�Ȭ�49...49-48=1 
		}else{
			op1 = Pop();
			op2 = Pop();
			switch(getToken(b[i])){
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
	printf("�p�⵲�G��%d", Pop());
}
