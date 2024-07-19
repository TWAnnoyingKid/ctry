#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct line{
	float a, b, c; //ax+by=c 
};
struct parabola{
	float a, b, c; //y=ax^2+bx+c
};

struct line LN;
typedef struct parabola PA;

void peakPoint(PA P){
	float M = (P.b/(2*P.a));
	float N = ((4*P.a*P.c)-(P.b*P.b))/(4*P.a);
	printf("(%f,%f)",-M,N); //2(X+3/4)^2-1/8
}

void LN2LN(LN L1, LN L2){
	if((L1.a/L2.a) == (L1.b/L2.b)){
		if((L1.a/L2.a) == (L1.c/L2.c)){
			printf("\n重合\n");
		}else{
			printf("\n平行\n");
		}
	}else{
		printf("\n相交\n");
	}
	float delta= ((L1.a*L2.b)-(L1.b*L2.a));
	float deltaX= ((L1.c*L2.b)-(L1.b*L2.c));
	float deltaY= ((L1.a*L2.c)-(L1.c*L2.a));
	printf("交點座標為(%.2f,%.2f)",(deltaX/delta),(deltaY/delta));
}

void LN2PA(LN L, PA P){
	float o,s,t;
	o = P.a;
	s = P.b-((L.c-L.a)/L.b);
	t = P.c;
	if(((s*s)-(4*o*t)) == 0){
		printf("\n相切\n");
	}else if(((s*s)-(4*o*t)) > 0){
		printf("\n相交\n");
	}else{
		printf("\n相離\n");
	}
}

main(){
	LN a={1,2,1}, b={2,1,2}; //x+2y=1 2x+y=2 
	PA p={2,3,1}; //y=ax^2+bx+c
	peakPoint(p);
	LN2LN(a, b);
	LN2PA(a, p);
}
