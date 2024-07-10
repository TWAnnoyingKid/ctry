#include <stdio.h>
#include <stdlib.h>

main(){
	int a;
	int b;
	float x;
	float y;
	scanf("%d%d",&a,&b);
	scanf("%f%f",&x,&y);
	printf("a=%d, b=%d\n",a,b);
	printf("x=%f, y=%f\n",x,y);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%f + %f = %f\n",x,y,x+y);
}
