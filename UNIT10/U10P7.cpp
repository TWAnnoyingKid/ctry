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
		printf("�ۥ�\n");
	}else if(d >= rp){
		if(d == rp){
			printf("�~��\n");
		}else if(d > rp){
			printf("�~��\n");
		}
	}else if(d <= rm){
		if(d == rm){
			printf("����\n");
		}else if(d < rm){
			printf("����\n");
		}
	}
}

main(){
	CL a={3,1,(-2)},b={5,3,4},c={2,(-3),1};
	printf("A, B��");
	relation(a, b);
	printf("A, C��");
	relation(a, c);
	printf("B, C��");
	relation(b, c);
}
