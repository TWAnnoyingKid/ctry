#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x,y,d;
};
typedef struct point PT;

PT origin(PT i){
	i.d =  sqrt(pow((i.x),2) + pow((i.y),2));
	return i;
}

main(){
	PT a,b,c;
	printf("��Ja�y�СG\n");
	scanf("%f%f",&a.x, &a.y);
	printf("��Jb�y�СG\n");
	scanf("%f%f",&b.x, &b.y);
	printf("��Jc�y�СG\n");
	scanf("%f%f",&c.x, &c.y);
	a = origin(a);
	b = origin(b);
	c = origin(c);
	printf("\nA�ܭ��I = %f\nB�ܭ��I = %f\nC�ܭ��I = %f",
			a.d, b.d, c.d);
}
