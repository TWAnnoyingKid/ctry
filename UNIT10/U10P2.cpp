#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x,y;
};
typedef struct point PT;

PT midPT(PT i, PT k){
	PT m;
	m.x = (i.x+k.x)/2;
	m.y = (i.y+k.y)/2;
	return m;
}

main(){
	PT a,b,c,mab,mbc,mac;
	float AB,AC,BC;
	printf("��Ja�y�СG\n");
	scanf("%f%f",&a.x, &a.y);
	printf("��Jb�y�СG\n");
	scanf("%f%f",&b.x, &b.y);
	printf("��Jc�y�СG\n");
	scanf("%f%f",&c.x, &c.y);
	mab = midPT(a, b);
	mbc = midPT(b, c);
	mac = midPT(a, c);
	printf("\nAB���I�y�� = (%.2f, %.2f)\nAC���I�y�� = (%.2f, %.2f)\nBC���I�y�� = (%.2f, %.2f)",
			mab.x,mab.y,mac.x,mac.y,mbc.x,mbc.y);
}
