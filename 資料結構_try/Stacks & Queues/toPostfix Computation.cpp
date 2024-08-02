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

int getToken(char symbol){ //���禡���٧�쪺�r�� 
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

int precedence(char symbol){ //���禡���ٹB��l���u���ż�
	switch(symbol){
		case'+' :case'-' : 	return '1'; // +- ���u���ż� �̧C 
		case'*' :case'/' :	return '2'; // */ ���u���żƤ� +- ���� 
	}
}


void Postfix(char* a, char* b){
	int o = -1;
	char s[MAX_STACK_SIZE]; //�ŧi�@�Ӱ��| 
	char temp;
	for(int i=0; getToken(a[i])!='0'; i++){
		switch(getToken(a[i])){
			case '(':	Push(a[i]);
						break;
							
			case ')':	while(stack[top] != '('){ //����|���r�� !='(' 
							b[++o] = Pop(); //��X���|���B��l��b�� 
						} //�����j�����|���̰��r���|����'(' 
						Pop(); //��'(' pop�� 
						break;
						
			case '+':	case '-':	case '*':	case '/':
							while(precedence(getToken(stack[top])) >= precedence(getToken(a[i])) ){ //����|���B��l���u���żƤ�~���[�J�B��l���u���ż� ���άۦP��
								b[++o] = Pop(); //�N���|���B��l pop�ib�� 
							}
							Push(a[i]); //�A�N�~���[�J�B��l��i���| 
							break;	
							
			case 'O': 	b[++o] = a[i]; //�p�G�O�Ʀr�Ψ�L�B�⤸�N������ib�� 
						break;
						
			default: 	printf("err");	
		}
	}
	while(!IsEmpty()){ //�����ܼƨ��� 
		b[++o] = Pop(); //��W��for�j�鰵�� �Nstack�̩Ҧ��F��@�ӭ�pop�ib�� 
	}
}

int Eval(char* a){
	int op1=0, op2=0;
	for(int i=0; a[i]!='\0'; i++){
		if(getToken(a[i])=='O'){ //��a[i]���B�⤸ ������i���|
			Push(a[i]-'0'); // -'0'�N�r���ܦ���� �]'0'��ASCII�Ȭ�48 '1'��ASCII�Ȭ�49...49-48=1 
		}else{ //��a[i]���B��l �N���|�̤W����ӼƭȰ��p�� �Apush�i�h 
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
	a = (char *)malloc(100 * sizeof(char)); //�ʺA���t100�Ӧr�����Ŷ�  
	printf("�п�J�h�����G");
	scanf("%s", a);
	printf("���m���G");
	printf("%s\n" , a);
	
	Postfix(a,b);
	
	printf("��m���G");
	printf("%s\n" , b);
	
	printf("�p�⵲�G��%d", Eval(b));
}
