#include <stdio.h>
#include <stdlib.h>
int x=1; //此X為全域變數 

void A();
void B();
main(){
	int x=10; //在main裡定義區域變數X=10 
	printf("%d\n",x);  //優先取得程式內定義之X 印出10
	A();  //呼叫副程式A
	printf("%d\n",x);  //印出10
	B();  //呼叫副程式B 
	printf("%d\n",x);  //印出10
}
void A(){
	int x=20; //在副程式A裡定義區域變數X=20 
	printf("A：%d\n",x); //優先取得程式內定義之X 印出20
	x++; //20+1
	printf("A：%d\n",x); //印出21 
}
void B(){
	printf("B：%d\n",x); //取得全域變數X 印出1
	x++; //1+1
	printf("B：%d\n",x); //印出2
}

