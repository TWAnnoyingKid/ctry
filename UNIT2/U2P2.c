#include <stdio.h>
#include <stdlib.h>

main(){
	int a; //宣告變數a 
	int b; //宣告變數b 
	int c; //宣告變數c
	scanf("%d%d%d",&a,&b,&c); //輸入變數a,b,c
	printf("%d^2 + %d^2 = %d\n",a,b,a*a+b*b); //輸出a平方+b平方
	printf("(%d - %d)^2 = %d\n",a,b,(a-b)*(a-b)); //輸出(a-b)平方
	printf("%d^3 + %d^3 + %d^3 - 3*%d*%d*%d = %d\n",a,b,c,a,b,c,(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c)); //輸出a^3+b^3+c^3-3abc
	printf("(%d+%d) / (%d-%d) = %d\n",a,b,a,b,(a+b)/(a-b)); //輸出(a+b)/(a-b)
}
