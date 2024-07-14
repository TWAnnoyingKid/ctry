#include <stdio.h>
#include <stdlib.h>

main(){
	int n; //指定空間大小
	int* a; //管理動態記憶體的指標
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int)*n); //取得記憶體空間
	// 使用動態取得的記憶體空間
	for(int i=0;i<=n;i++){
		a[i] =(i);
		printf("%d\n", a[i]);
	}
}
