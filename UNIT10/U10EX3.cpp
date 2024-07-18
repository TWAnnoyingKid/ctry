#include <stdio.h>
#include <stdlib.h>

struct card{
	char name[20];
	int age;
	float pay;
};

typedef struct card CD;

main(){
	CD* p;
	CD a={"Mike", 19, 20.4};
	CD b={"John", 34, 50.2};
	p= &a;
	printf("name= %s, %s's age= %d, %s's pay= %f\n", 
			p->name, p->name, p->age, p->name, p->pay);
	p= &b;
	printf("name= %s, %s's age= %d, %s's pay= %f\n", 
			p->name, p->name, p->age, p->name, p->pay);
}
