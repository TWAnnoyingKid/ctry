#include <stdio.h>
#include <stdlib.h>

main(){
	int *p; //宣告p為指標變數 
	printf("&p= %x\n", &p); //用 16進位表示p位址 
	int x=10, y=20;
	p= &x; //if &x = 0x300 p=變數x的位址 
	printf("&x= %x\t", p); //用 16進位表示指向x位址 
	printf("x= %d\n", *p); //印出指向位址的內容
	p= &y; //if &y = 0x304 p=變數y的位址 
	printf("&y= %x\t", p); //用 16進位表示指向y位址 
	printf("y= %d\n", *p); //印出指向位址的內容
}
