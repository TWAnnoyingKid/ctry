#include <stdio.h>
#include <stdlib.h>

main(){
	int a; //�ŧi�ܼ�a 
	int b; //�ŧi�ܼ�b 
	int c; //�ŧi�ܼ�c
	scanf("%d%d%d",&a,&b,&c); //��J�ܼ�a,b,c
	printf("%d^2 + %d^2 = %d\n",a,b,a*a+b*b); //��Xa����+b����
	printf("(%d - %d)^2 = %d\n",a,b,(a-b)*(a-b)); //��X(a-b)����
	printf("%d^3 + %d^3 + %d^3 - 3*%d*%d*%d = %d\n",a,b,c,a,b,c,(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c)); //��Xa^3+b^3+c^3-3abc
	printf("(%d+%d) / (%d-%d) = %d\n",a,b,a,b,(a+b)/(a-b)); //��X(a+b)/(a-b)
}
