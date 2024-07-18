#include <stdio.h>
#include <stdlib.h>

struct card{
	char name[20];
	int age;
	float pay;
};

typedef struct card CD;

CD* newCD(){
	CD* p=(CD*)malloc(sizeof(CD));
	printf("NAME¡G");
	scanf("%s", p->name);
	printf("AGE¡G");
	scanf("%d", &p->age);
	printf("PAY¡G");
	scanf("%f", &p->pay);
	return p;
}

main(){
	printf("start\n");
	CD* a;
	a = newCD();
	printf("name= %s, %s's age= %d, %s's pay= %f\n", 
			a->name, a->name, a->age, a->name, a->pay);
}
