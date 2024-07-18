#include <stdio.h>
#include <stdlib.h>

struct card{
	char name[20];
	int age;
	float pay;
};

typedef struct card CD;

main(){
	CD a={"Mike", 19, 20.4}, b={"John", 34, 50.2}, t;
	printf("A¡Gname= %s, %s's age= %d, %s's pay= %f\n", 
			a.name, a.name, a.age, a.name, a.pay);
	printf("B¡Gname= %s, %s's age= %d, %s's pay= %f\n\n\n", 
			b.name, b.name, b.age, b.name, b.pay);
	t= a;
	a= b;
	b= t;
	printf("A¡Gname= %s, %s's age= %d, %s's pay= %f\n", 
			a.name, a.name, a.age, a.name, a.pay);
	printf("B¡Gname= %s, %s's age= %d, %s's pay= %f\n", 
			b.name, b.name, b.age, b.name, b.pay);
}
