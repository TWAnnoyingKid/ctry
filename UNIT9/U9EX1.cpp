#include <stdio.h>
#include <stdlib.h>

main(){
	int *p; //�ŧip�������ܼ� 
	printf("&p= %x\n", &p); //�� 16�i����p��} 
	int x=10, y=20;
	p= &x; //if &x = 0x300 p=�ܼ�x����} 
	printf("&x= %x\t", p); //�� 16�i���ܫ��Vx��} 
	printf("x= %d\n", *p); //�L�X���V��}�����e
	p= &y; //if &y = 0x304 p=�ܼ�y����} 
	printf("&y= %x\t", p); //�� 16�i���ܫ��Vy��} 
	printf("y= %d\n", *p); //�L�X���V��}�����e
}
