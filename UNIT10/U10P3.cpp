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
	printf("輸入a座標：\n");
	scanf("%f%f",&a.x, &a.y);
	printf("輸入b座標：\n");
	scanf("%f%f",&b.x, &b.y);
	printf("輸入c座標：\n");
	scanf("%f%f",&c.x, &c.y);
	a = origin(a);
	b = origin(b);
	c = origin(c);
	printf("\nA至原點 = %f\nB至原點 = %f\nC至原點 = %f",
			a.d, b.d, c.d);
}
