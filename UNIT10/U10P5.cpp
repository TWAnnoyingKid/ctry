#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x,y,d;
};
typedef struct point PT;

PT distant(PT i){
	i.d =  sqrt(pow((i.x),2) + pow((i.y),2));
	return i;
}

PT mintomax(PT a[]){
	float min= a[0].d;
	int minp=0;
	PT F=a[0];
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
	return (*a);
}

main(){
	PT a[5];
	for(int i=0; i<5; i++){
		printf("輸入第%d個座標：\n",(i+1));
		scanf("%f%f",&a[i].x,&a[i].y);
		a[i] = distant(a[i]);
	}
	printf("\n");
	*a = mintomax(a);
	for(int i=0; i<5; i++){
		printf("(%.0f, %.0f)\t",a[i].x,a[i].y);
	}
}
