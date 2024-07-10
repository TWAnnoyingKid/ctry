#include <stdio.h>
#include <stdlib.h>

main(){
	int a,b,d;
	scanf("%d%d",&a,&b);
	for(int temp; b!=0;){
		temp = b;
		b = a%b;
		a = temp;
	}
	printf("%d\n",a);
}
