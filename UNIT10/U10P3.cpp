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
	printf("��Ja�y�СG\n");
	scanf("%f%f",&a.x, &a.y);
	printf("��Jb�y�СG\n");
	scanf("%f%f",&b.x, &b.y);
	printf("��Jc�y�СG\n");
	scanf("%f%f",&c.x, &c.y);
	PT o={0,0,0};
	printf("\nA�ܭ��I = %.2f\nB�ܭ��I = %.2f\nC�ܭ��I = %.2f",
			distance(a,o), distance(b,o), distance(c,o));
}
