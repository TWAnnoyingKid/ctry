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
	printf("輸入a座標：\n");
	scanf("%f%f",&a.x, &a.y);
	printf("輸入b座標：\n");
	scanf("%f%f",&b.x, &b.y);
	printf("輸入c座標：\n");
	scanf("%f%f",&c.x, &c.y);
	mab = midPT(a, b);
	mbc = midPT(b, c);
	mac = midPT(a, c);
	printf("\nAB中點座標 = (%.2f, %.2f)\nAC中點座標 = (%.2f, %.2f)\nBC中點座標 = (%.2f, %.2f)",
			mab.x,mab.y,mac.x,mac.y,mbc.x,mbc.y);
}
