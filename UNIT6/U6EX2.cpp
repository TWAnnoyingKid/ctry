#include <stdio.h>
#include <stdlib.h>
float cube(float);
main(){
	float x;
	scanf("%f",&x);
	printf("3���ߤ謰%f\n",cube(3.0));
	printf("x���ߤ謰%f\n",cube(x));
}
float cube(float a){
	return a*a*a;
}
