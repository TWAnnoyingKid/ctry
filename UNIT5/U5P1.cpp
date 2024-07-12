#include <stdio.h>
#include <stdlib.h>
main(){
	int n,sum;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		switch(n%i){
			case 0: sum = sum+i;
					break;
			default: printf("");
		}
	}
	printf("公因數總和：%d\n", sum);
}

