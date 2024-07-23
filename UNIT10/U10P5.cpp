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
	PT a[5],F;
	PT o={0,0,0};
	float min;
	int minp=0;
	
	for(int i=0; i<5; i++){
		printf("輸入第%d個座標：\n",(i+1));
		scanf("%f%f",&a[i].x,&a[i].y);
		a[i].d = distance(a[i],o);
	}
	printf("\n");
	F=a[0];
	min= a[0].d;
	for(int i=0; i<4; i++, F=a[i], min=a[i].d, minp=i){
		for(int k=i; k<5; k++){
			if(a[k].d < min){
				min = a[k].d;
				minp = k;
				F = a[minp];
			}
		}
		a[minp] = a[i];
		a[i] = F;
	}

	for(int i=0; i<5; i++){
		printf("(%.0f, %.0f)\t",a[i].x,a[i].y);
	}
}
