#include <stdio.h>
#include <stdlib.h>

struct card{
	char name[20];
	int age;
	float pay;
};

typedef struct card CD;

main(){
	CD a[3];
	for(int i=1;i<=3;i++){
		printf("��J�� %d �ӤH����ơG\n",i);
		printf("NAME�G");
		scanf("%s", a[i].name);
		printf("AGE�G");
		scanf("%d", &a[i].age);
		printf("PAY�G");
		scanf("%f", &a[i].pay);
		printf("name= %s, %s's age= %d, %s's pay= %f\n\n", 
		a[i].name, a[i].name, a[i].age, a[i].name, a[i].pay);
	}
}
