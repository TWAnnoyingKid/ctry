#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x,y;
};
typedef struct point PT;

float distant(PT i, PT k){
	float s = sqrt((pow((i.x-k.x),2))+(pow((i.y-k.y),2)));
	return s;
}

main(){
	PT a,b,c;
	printf("��Ja�y�СG\n");
	scanf("%f%f",&a.x, &a.y);
	printf("��Jb�y�СG\n");
	scanf("%f%f",&b.x, &b.y);
	printf("��Jc�y�СG\n");
	scanf("%f%f",&c.x, &c.y);
	printf("\nAB = %f\nAC = %f\nBC = %f",
			distant(a, b),distant(a, c),distant(b, c));
}
