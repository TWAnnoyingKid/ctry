#include <stdio.h>
#include <stdlib.h>
float cube(float);
main(){
	float x;
	scanf("%f",&x);
	printf("3的立方為%f\n",cube(3.0));
	printf("x的立方為%f\n",cube(x));
}
float cube(float a){
	return a*a*a;
}
