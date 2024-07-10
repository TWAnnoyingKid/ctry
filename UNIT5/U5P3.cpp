#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,s;
	scanf("%d%d", &a, &b);
	for(int i=1; i<=b && i<=a; i++){
		if((a%i==0) && (b%i==0)){
			s = i;
		}
	}
	printf("gcd= %d\n", s);
}

