#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x,y,d;
};
typedef struct point PT;

float distance(PT i, PT o){
	float s = sqrt((pow((i.x-o.x),2))+(pow((i.y-o.y),2)));
	return s;
}

main(){
	PT a,b,c;
	printf("輸入a座標：\n");
	scanf("%f%f",&a.x, &a.y);
	printf("輸入b座標：\n");
	scanf("%f%f",&b.x, &b.y);
	printf("輸入c座標：\n");
	scanf("%f%f",&c.x, &c.y);
	PT o={0,0,0};
	printf("\nA至原點 = %.2f\nB至原點 = %.2f\nC至原點 = %.2f",
			distance(a,o), distance(b,o), distance(c,o));
}
