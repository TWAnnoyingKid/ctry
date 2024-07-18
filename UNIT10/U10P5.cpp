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

float mintomax(float *p){
	float min = p[0];
	for(int i=0,minp=0; i<5; i++,min=p[i],minp=i){
		for(int j=(i+1); j<5; j++){
			if(p[j] < min){
				min = p[j];
				minp = j;
			}
		}
		p[minp] = p[i];
		p[i] = min;
	}
	return *p;
}

main(){
	PT a[5];
	float p[5];
	for(int i=0; i<5; i++){
		printf("輸入第%d個座標：\n",(i+1));
		scanf("%f%f",&a[i].x,&a[i].y);
		a[i] = origin(a[i]);
		p[i] = a[i].d;
	}
	*p = mintomax(p);
	for(int i=0; i<5; i++){
		printf("%.2f ", p[i]);
	}
}
