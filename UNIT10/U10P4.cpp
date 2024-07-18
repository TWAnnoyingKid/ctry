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
	float max=0;
	PT a[5];
	for(int i=0; i<5; i++){
		printf("輸入第%d個座標：\n",(i+1));
		scanf("%f%f",&a[i].x,&a[i].y);
		a[i] = origin(a[i]);
		if(a[i].d > max){
			max = a[i].d;
		}
	}
	printf("dMax = %f", max);
}
