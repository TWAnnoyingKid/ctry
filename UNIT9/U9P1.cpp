#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float avg(float*, int);//������ 
float sd(float*, float, int);//�зǮt 
main(){
    float m,a[6]={12, 35, 24, -6, 19, -10};
    float* p;
    p = a;
    printf("avg = %f\n", m=avg(p, 6));
    printf("\nsd = %f\n", sd(p, m, 6)); 
}
float avg(float* a, int n){ //n����ƭӼ�
	float s=0;
	for(int i=0; i<n; i++,a++){
		s = s+*a;
	}
	s = s/6;
	return s;
} 
float sd(float* a, float m, int n){ // m��������
	float s=0;
	for(int i=0; i<n; i++,a++){
		s = s+ (*a - m);
	}
	s = sqrt(s/6);
	return s;
}
 


