#include <stdio.h>
#include <stdlib.h>
int x=1; //��X�������ܼ� 

void A();
void B();
main(){
	int x=10; //�bmain�̩w�q�ϰ��ܼ�X=10 
	printf("%d\n",x);  //�u�����o�{�����w�q��X �L�X10
	A();  //�I�s�Ƶ{��A
	printf("%d\n",x);  //�L�X10
	B();  //�I�s�Ƶ{��B 
	printf("%d\n",x);  //�L�X10
}
void A(){
	int x=20; //�b�Ƶ{��A�̩w�q�ϰ��ܼ�X=20 
	printf("A�G%d\n",x); //�u�����o�{�����w�q��X �L�X20
	x++; //20+1
	printf("A�G%d\n",x); //�L�X21 
}
void B(){
	printf("B�G%d\n",x); //���o�����ܼ�X �L�X1
	x++; //1+1
	printf("B�G%d\n",x); //�L�X2
}

