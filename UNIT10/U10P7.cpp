#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct circle{
	float r,x,y;
};
typedef struct circle CL;

void relation(CL i, CL k){
	float d=sqrt((pow((i.x-k.x),2))+(pow((i.y-k.y),2))), rp=i.r+k.r, rm=abs(i.r-k.r);
	if(rp > d && d > rm){
		printf("相交\n");
	}else if(d >= rp){
		if(d == rp){
			printf("外切\n");
		}else if(d > rp){
			printf("外離\n");
		}
	}else if(d <= rm){
		if(d == rm){
			printf("內切\n");
		}else if(d < rm){
			printf("內離\n");
		}
	}
}

main(){
	CL a={3,1,(-2)},b={5,3,4},c={2,(-3),1};
	printf("A, B為");
	relation(a, b);
	printf("A, C為");
	relation(a, c);
	printf("B, C為");
	relation(b, c);
}
