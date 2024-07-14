#include <stdio.h>
#include <stdlib.h>
void cube(int*); 
int square(int);
main(){
	int x=10;
	printf("輸入邊長"); 
	scanf("%d",&x);
	x=square(x); //return x = x^2
	printf("x= %d\n",x); 
	cube(&x); //傳x位址
	printf("x= %d\n",x); 
}
void cube(int* x){ //int* 放進整數記憶體位址 
	*x =(*x)*(*x)*(*x); //直接改變數x的值 x = x^3
}
int square(int x){
	return x*x;
}
