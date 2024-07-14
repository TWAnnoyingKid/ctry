#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float avg(float*, int);//平均值 
float sd(float*, float, int);//標準差 
main(){
    float m,a[6]={12, 35, 24, -6, 19, -10};
    float* p;
    p = a;
    printf("avg = %f\n", m=avg(p, 6));
    printf("\nsd = %f\n", sd(p, m, 6)); 
}
float avg(float* a, int n){ //n為資料個數
	float s=0;
	for(int i=0; i<n; i++,a++){
		s = s+*a;
	}
	s = s/6;
	return s;
} 
float sd(float* a, float m, int n){ // m為平均值
	float s=0;
	for(int i=0; i<n; i++,a++){
		s = s+ (*a - m);
	}
	s = sqrt(s/6);
	return s;
}
 


