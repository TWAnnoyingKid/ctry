#include <stdio.h>
#include <stdlib.h>

main(){
	int n; //���w�Ŷ��j�p
	int* a; //�޲z�ʺA�O���骺����
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int)*n); //���o�O����Ŷ�
	// �ϥΰʺA���o���O����Ŷ�
	for(int i=0;i<=n;i++){
		a[i] =(i);
		printf("%d\n", a[i]);
	}
}
