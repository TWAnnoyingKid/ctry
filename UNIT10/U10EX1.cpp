#include <stdio.h>
#include <stdlib.h>

struct card{
	char name[20];
	int age;
	float pay;
};

typedef struct card CD;

main(){
	CD a;
	printf("NAME¡G");
	scanf("%s", a.name);
	printf("AGE¡G");
	scanf("%d", &a.age);
	printf("PAY¡G");
	scanf("%f", &a.pay);
	printf("name= %s, %s's age= %d, %s's pay= %f\n", a.name, a.name, a.age, a.name, a.pay);
}
