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
	char a[160]={'(','1','+','2',')','*','3','+','4','*','5'}, b[80], token ;
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
								token = stack[top];//�]token�� stack[top]
								Pop();//��pop���̤W�� 
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
	
	for(int i=0; b[i]!='\0'; i++){
		printf("%c" , b[i]);
	}
}
