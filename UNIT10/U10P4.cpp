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
	float max=0;
	PT a[5],F;
	PT o={0,0,0};
	for(int i=0; i<5; i++){
		printf("輸入第%d個座標：\n",(i+1));
		scanf("%f%f",&a[i].x,&a[i].y);
		a[i].d = distance(a[i],o); //CHANGE
		if(a[i].d > max){
			max = a[i].d;
			F = a[i];
		}
	}
	printf("dMax = (%.2f , %.2f)", F.x, F.y);
}
