#include <stdio.h>
#include <stdlib.h>

struct card{
	char name[20];
	int age;
	float pay;
};

typedef struct card CD;

void addPay(CD* a, float m){
	a->pay += m; //pay= pay + m
}

main(){
	CD a={"Mike", 19, 20.4};
	addPay(&a, 10);
	printf("name= %s, %s's age= %d, %s's pay= %f\n", 
			a.name, a.name, a.age, a.name, a.pay);
}
