#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x,y;
};
typedef struct point PT;

main(){
	PT a,b,c;
	float AB,AC,BC;
	printf("��Ja�y�СG\n");
	scanf("%f%f",&a.x, &a.y);
	printf("��Jb�y�СG\n");
	scanf("%f%f",&b.x, &b.y);
	printf("��Jc�y�СG\n");
	scanf("%f%f",&c.x, &c.y);
	AB = sqrt((pow((a.x-b.x),2))+(pow((a.y-b.y),2)));
	AC = sqrt((pow((a.x-c.x),2))+(pow((a.y-c.y),2)));
	BC = sqrt((pow((b.x-c.x),2))+(pow((b.y-c.y),2)));
	printf("\nAB = %f\nAC = %f\nBC = %f",AB,AC,BC);
}
