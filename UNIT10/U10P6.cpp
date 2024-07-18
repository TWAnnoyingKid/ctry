#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct circle{
	float r,x,y;
};
typedef struct circle CL;

float distant(CL i, CL k){
	float s = sqrt((pow((i.x-k.x),2))+(pow((i.y-k.y),2)));
	return s;
}

main(){
	CL a={3,1,(-2)},b={5,3,4},c={2,(-3),1};
	printf("AB = %.2f\nAC = %.2f\nBC = %.2f",
			distant(a, b),distant(a, c),distant(b, c));
}
