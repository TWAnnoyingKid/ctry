#include <stdio.h>
#include <stdlib.h>
void cube(int*); 
int square(int);
main(){
	int x=10;
	printf("��J���"); 
	scanf("%d",&x);
	x=square(x); //return x = x^2
	printf("x= %d\n",x); 
	cube(&x); //��x��}
	printf("x= %d\n",x); 
}
void cube(int* x){ //int* ��i��ưO�����} 
	*x =(*x)*(*x)*(*x); //�������ܼ�x���� x = x^3
}
int square(int x){
	return x*x;
}
